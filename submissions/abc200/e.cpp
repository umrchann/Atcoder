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
    ll a,b,c,d,e,n,m,k,ans=1,sum=0;
    ld x,y,z,ans2=0;
    cin>>n>>k;
    vector<vector<ll>> dp(4,vector<ll>(3000001));
    dp[0][0]=1;
    f(i,0,3){
        f(j,0,i*n+1){
            dp[i+1][j+1]+=dp[i][j];
            dp[i+1][j+n+1]-=dp[i][j];
        }
        f(j,1,(i+1)*n+1){
            dp[i+1][j]+=dp[i+1][j-1];
        }
    }
    f(i,3,3*n+1){
        if(k<=dp[3][i]){
            a=i;
            break;
        }
        else{
            k-=dp[3][i];
        }
    }
    f(i,1,n+1){
        d=max(ans,a-i-n);
        e=min(n,a-i-1);
        if(d>e){
            continue;
        }
        if(k>e-d+1){
            k-=e-d+1;
            continue;
        }
        b=d+k-1;
        c=a-i-b;
        cout<<i<<" "<<b<<" "<<c<<endl;
        return 0;
    }
    return 0;
}
