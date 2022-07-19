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
void yn(bool a){
    puts(a?"Yes":"No");
}
void YN(bool a){
    puts(a?"YES":"NO");
}
void answer(vector<ll> &a,ll n){
    f(i,0,n){
        if(i!=0){
            cout<<" ";
        }
        cout<<a[i];
    }
}
ll sum(ll a,ll b){
    return 4*a*b+3*a+3*b;
}
vector<ll> x={1,1,1,0,0,-1,-1,-1},y={1,0,-1,1,-1,1,0,-1};
int main(){
    ll n;
    cin>>n;
    ll s[n];
    f(i,0,n){
        cin>>s[i];
    }
    ll ans=n;
    f(i,0,n){
        bool now=false;
        f(a,1,s[i]+1)f(b,1,s[i]+1){
            if(sum(a,b)==s[i]){
                now=true;
            }
        }
        if(now){
            ans--;
        }
    }
    cout<<ans<<endl;
    return 0;
}
