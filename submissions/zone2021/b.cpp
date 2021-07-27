#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
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
    ll n;
    cin>>n;
    long double D,H,d,h;
    cin>>D>>H;
    long double ans=0;
    f(i,0,n){
        cin>>d>>h;
        ans=max(ans,H-(H-h)*D/(D-d));
    }
    cout<<fixed<<setprecision(4)<<ans<<endl;
    return 0;
}
