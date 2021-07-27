#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
int main(){
    ll n,k,ans=0;
    cin>>n>>k;
    ll a[2*n+1];
    if(k<0){
        k*=-1;
    }
    a[1]=0;
    f(i,2,n+1){
        a[i]=a[i-1]+1;
        a[2*n+2-i]=a[i];
    }
    a[n+1]=n;
    f(i,k+2,2*n+1){
        ans+=a[i]*a[i-k];
    }
    cout<<ans<<endl;
    return 0;
}
