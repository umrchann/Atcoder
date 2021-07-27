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
void answer(ll a){
    if(a==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
int main(){
    ll x,y,ans=0;
    vector<ll> m(206,0);
    f(i,0,4){
        m[i]=(4-i)*pow(10,5);
    }
    cin>>x>>y;
    ans=ans+m[x]+m[y];
    if(x==y&&x==1){
        ans+=m[0];
    }
    cout<<ans<<endl;
    return 0;
}
