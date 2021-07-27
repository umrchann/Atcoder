#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
const ll infl = 1LL << 60;
template<typename T> using min_priority_queue = priority_queue<T, vector<T>, greater<T>>;
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }
int main(){
    ll n;
    string s,x;
    cin>>n>>s>>x;
    vector<vector<bool>> dp(n + 1, vector<bool>(7, false));
    dp[n][0] = true;
    f2(i,n-1,0){
        ll num=s[i]-'0';
        f(r,0,7){
            if(x[i]=='T'){
                dp[i][r]=dp[i+1][(10*r)%7]||dp[i+1][(10*r+num)%7];
            }
            else{
                dp[i][r]=dp[i+1][(10*r)%7]&&dp[i+1][(10*r+num)%7];
            }
        }
    }
    cout<<(dp[0][0] ? "Takahashi" : "Aoki");
    return 0;
}
