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
    ll n,m;
    cin>>n>>m;
    ll s[n-1],x[m],a[n];
    f(i,0,n-1){
        cin>>s[i];
    }
    f(i,0,m){
        cin>>x[i];
    }
    a[0]=s[0];
    f(i,1,n){
        a[i]=s[i-1]-a[i-1];
    }
    map<ll,ll> mp;
    f(i,0,n){
        f(j,0,m){
            ll cnt=x[j]-a[i];
            if(i%2!=0){
                cnt*=-1;
            }
            mp[cnt]++;
        }
    }
    ll ans=0;
    for(auto p:mp){
        ans=max(ans,p.second);
    }
    cout<<ans<<endl;
    return 0;
}
