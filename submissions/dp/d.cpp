#include <iostream>
using namespace std;
#define ll long long 
const long long inf = (1 << 29);
int main(){
    ll n,w;
    cin>>n>>w;
    ll value[n+1],weight[n+1];//価値と重さ
    for(ll i=1;i<=n;i++){
        cin>>weight[i]>>value[i];
    }
    ll dp[n+1][w+1];//dp
    for(ll i=0;i<=n;i++){
        for(ll j=0;j<=w;j++){
            dp[i][j]=0;
        }
    }
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=w;j++){
            if(j>=weight[i]){
                dp[i][j]=max(dp[i][j],dp[i-1][j-weight[i]]+value[i]);
            }
            dp[i][j]=max(dp[i][j],dp[i-1][j]);
            }
    }
    cout<<dp[n][w]<<endl;
    
    return 0;
}
