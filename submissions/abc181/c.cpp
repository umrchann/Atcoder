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
using Graph = vector<vector<ll>>; 
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
    ll n,m,ans;
    ll a=1,b,c;
    cin>>n;
    ld x[n],y[n];
    f(i,0,n){
        cin>>x[i]>>y[i];
    }
    f(i,0,n-2){
        f(j,i+1,n-1){
            f(k,j+1,n){
                if(x[i]==x[j]&&x[i]==x[k]){
                    yn(true);
                    return 0;
                }
                if(x[i]!=x[j]&&x[i]!=x[k]&&(y[j]-y[i])/(x[j]-x[i])==(y[k]-y[i])/(x[k]-x[i])){
                    yn(true);
                    return 0;
                }
            }
        }
    }
    yn(false);
    return 0;
}
