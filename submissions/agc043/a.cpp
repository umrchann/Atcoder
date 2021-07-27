#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
ll gets(char s){
    if(s=='.'){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    ll h,w;
    cin>>h>>w;
    char s[h][w];
    vector<vector<ll>> dp(h, vector<ll>(w, mod));
    f(i,0,h){
        f(j,0,w){
            cin>>s[i][j];
            if(i==0&&j==0){
                dp[i][j]=gets(s[i][j]);
            }
            else if(i==0&&j!=0){
                if(s[i][j]==s[i][j-1]){
                    dp[i][j]=dp[i][j-1];
                }
                else{
                    dp[i][j]=dp[i][j-1]+gets(s[i][j]);
                }
            }
            else if(i!=0&&j==0){
                if(s[i][j]==s[i-1][j]){
                    dp[i][j]=dp[i-1][j];
                }
                else{
                    dp[i][j]=dp[i-1][j]+gets(s[i][j]);
                }
            }
        }
    }
    f(i,1,h){
        f(j,1,w){
            if(s[i][j-1] == s[i][j]) dp[i][j]=min(dp[i][j],dp[i][j-1]);
            else dp[i][j]=min(dp[i][j],dp[i][j-1]+gets(s[i][j]));
            
            if(s[i-1][j] == s[i][j]) dp[i][j]=min(dp[i][j],dp[i-1][j]);
            else dp[i][j]=min(dp[i][j],dp[i-1][j]+gets(s[i][j]));
        }
    }
    cout<<dp[h-1][w-1]<<endl;
    return 0;
}
