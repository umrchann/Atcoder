#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
#define ld long double 
using namespace std;
const long long mod=1e9+7;
const long long mod2=998244353;
const long long INF = (1 << 29);
void chmin(int& a, int b){ if(a > b) a = b; }
void chmax(int& a, int b){ if(a < b) a = b; }
using Graph = vector<vector<int>>;
Graph G;
void yn2(ll a){
    if(a==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
void yn(bool a){
    puts(a?"Yes":"No");
}
void YN(bool a){
    puts(a?"YES":"NO");
}
int main(){
    string s,t,u;
    ll a,b,c,d,e,n,m,k,ans=0,ans2=0;
    ld x,y,z;
    //vector <pair<long long,long long>> pairs(n);
    cin>>n;
    ll tt[n];
    k=0;
    f(i,0,n){
        cin>>tt[i];
        ans+=tt[i];
    }
    k=ans/2;
    bool dp[101][100001];
    memset(dp, 0, sizeof(dp));
    dp[0][0]=true;
    f(i,0,n){
        f(j,0,k+1){
            dp[i+1][j] |=dp[i][j];
            if(j>=tt[i]){
                dp[i+1][j]|=dp[i][j-tt[i]];
            }
        }
    }
    f2(i,k,0){
        if(dp[n][i]){
            cout<<max(i,ans-i)<<endl;
            return 0;
        }
    }
    return 0;
}
