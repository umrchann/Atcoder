#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
int main(){
    ll n,m,k;
    cin>>n>>m;
    vector<vector<ll>> s(m);
    f(i,0,m){
        cin>>k;
        s[i].resize(k);
        f(j,0,k){
            cin>>s[i][j];
            --s[i][j];
        }
    }
    vector<ll> p(m);
    f(i,0,m){
        cin>>p[i];
    }
    ll ans=0;
    for(ll i=0;i<(1<<n);++i){
        bool now=true;
        f(j,0,m){
            ll c=0;
            for(ll id:s[j]){
                if((i>>id)&1){
                    ++c;
                }
            }
            c%=2;
            if(c!=p[j]){
                now=false;
            }
        }
        if(now){
            ++ans;
        }
    }
    cout<<ans<<endl;
}
