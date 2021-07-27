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
    ll a,b,c,d,e,n,m,ans=0;
    ld x,y,z,ans2=0;
    cin>>n;
    ll aa[n];
    ll bb[15]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    f(i,0,n){
        cin>>aa[i];
    }
    ans=LLONG_MAX;
    f(i,0,(1<<15)){
        ll now=1;
        for(ll j=0,k=1;j<15;j++,k*=2){
            if(i&k){
                now*=bb[j];
            }
        }
        bool jud=true;
        f(l,0,n){
            if(__gcd(now,aa[l])==1){
                jud=false;
            }
        }
        if(jud){
            ans=min(ans,now);
        }
    }
    cout<<ans<<endl;
    return 0;
}
