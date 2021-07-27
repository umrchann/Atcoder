#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
int main(){
    ll n;
    cin>>n;
    ll a[n],b[n],c[n];
    cin>>a[0];
    b[0]=a[0];
    c[0]=a[0];
    f(i,1,n){
        cin>>a[i];
        b[i]=b[i-1]+a[i];
        c[i]=c[i-1]+b[i];
    }
    ll ans=0,now=b[0];
    ans=max(ans,c[0]);
    f(i,1,n){
        now=max(now,b[i]);
        ans=max(ans,c[i-1]+now);
    }
    cout<<ans<<endl;
    return 0;
}
