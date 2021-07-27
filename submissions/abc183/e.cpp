#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
int main(){
    ll h,w;
    cin>>h>>w;
    ll M=1000000007;
    string c[h];
    ll x[h][w],y[h][w],z[h][w],dp[h][w];
    dp[0][0]=1;
    f(i,0,h){
        cin>>c[i];
    }
    f(i,0,h){
        f(j,0,w){
            x[i][j]=0;
            y[i][j]=0;
            z[i][j]=0;
            dp[i][j]=0;
        }
    }
    dp[0][0]=1;
    f(i,0,h){
        f(j,0,w){
            if(i==0&&j==0)continue;
		    if(c[i][j]=='#')continue;
            if(j>0)x[i][j]=(x[i][j-1]+dp[i][j-1])%M;
            if(i>0)y[i][j]=(y[i-1][j]+dp[i-1][j])%M;
            if(i>0&&j>0)z[i][j]=(z[i-1][j-1]+dp[i-1][j-1])%M;
            dp[i][j]=(x[i][j]+y[i][j]+z[i][j])%M;
        }
    }
    cout<<dp[h-1][w-1]<<endl;
}
