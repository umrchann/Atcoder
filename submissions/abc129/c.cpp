#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
int main(){
    ll n,m;
    cin>>n>>m;
    ll a[m];
    vector<bool> ok(n,true);
    f(i,0,m){
        cin>>a[i];
        ok[a[i]]=false;
    }
    vector<ll> dp(n+1);
    dp[0]=1;
    f(i,0,n){
        f(j,i+1,min(n,i+2)+1){
            if(ok[j]){
                dp[j]+=dp[i];
                dp[j]%=mod;
            }
        }
    }
    cout<<dp[n]<<endl;
    return 0;
}
