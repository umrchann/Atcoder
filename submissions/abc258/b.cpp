#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define fixed(i) fixed<<setprecision(i)
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
    ll n;
    char c;
    cin>>n;
    ll a[n][n];
    f(i,0,n){
        f(j,0,n){
            cin>>c;
            a[i][j]=c-'0';
        }
    }
    ll ans=0;
    vector<ll> x={1,1,1,0,0,-1,-1,-1},y={1,0,-1,1,-1,1,0,-1};
    f(i,0,n){
        f(j,0,n){
            f(k,0,8){
                ll now=0;
                ll nx=i,ny=j;
                f(l,0,n){
                    now*=10;
                    now+=a[nx][ny];
                    nx=(nx+x[k]+n)%n;
                    ny=(ny+y[k]+n)%n;
                    
                }
                ans=max(ans,now);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
