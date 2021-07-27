#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
int main(){
    ll n,p,ans=1;
    cin>>n>>p;
    if(n==1){
        cout<<p<<endl;
        return 0;
    }
    vector<ll> a(1000010);
    for(ll i=2;i<=1000000;i++){
        ll now=p;
        while(now>0){
            if(now%i==0){
                a[i]++;
            }
            else{
                break;
            }
            now/=i;
        }
    }
    for(ll i=2;i<=1000000;i++){
        if(a[i]>=n){
            ans=i;
        }
    }
    cout<<ans<<endl;
    return 0;
}
