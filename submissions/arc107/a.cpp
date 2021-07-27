#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
int main(){
    ll a,b,c,ans;
    ll mod=998244353;
    cin>>a>>b>>c;
    ll A=(1+a)*a/2;
    ll B=(1+b)*b/2;
    ll C=(1+c)*c/2;
    A%=mod;
    B%=mod;
    C%=mod;
    ans=(A*B)%mod;
    ans=(ans*C)%mod;
    cout<<ans<<endl;
    return 0;
}
