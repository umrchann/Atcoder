#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
int main(){
    ll n,k;
    cin>>n>>k;
    ll a[n];
    f(i,0,n){
        cin>>a[i];
    }
    vector<ll> b(n,0);
    ll ans=0,sum1=0,sum2=0;
    f(i,0,n-1){
        f(j,i,n){
            if(a[i]>a[j]){
                sum1++;
            }
        }
    }
    f(i,0,n){
        f(j,0,n){
            if(a[i]>a[j]){
                sum2++;
            }
        }
    }
    sum1%=mod;
    sum2%=mod;
    ans+=sum1*k+sum2*((k*(k-1)/2)%mod);
    cout<<ans%mod<<endl;
    return 0;
}
