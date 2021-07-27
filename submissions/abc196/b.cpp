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
    string x;
    cin>>x;
    string ans;
    f(i,0,x.size()){
        char now=x[i];
        if(now=='.'){
            break;
        }
        ans=ans+now;
    }
    cout<<ans<<endl;
    return 0;
}
