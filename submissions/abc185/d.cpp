#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
int main(){
    ll n,m;
    cin>>n>>m;
    if(n==0){
        cout<<1<<endl;
        return 0;
    }
    ll a[m];
    f(i,0,m){
        cin>>a[i];
    }
    sort(a,a+m);
    ll b[m+1];
    ll now=0;
    ll min=n;
    f(i,0,m){
        b[i]=a[i]-now-1;
        if(b[i]<min&&b[i]!=0){
            min=b[i];
        }
        now=a[i];
    }
    b[m]=n+1-now-1;
    if(b[m]<min&&b[m]!=0){
        min=b[m];
    }
    ll ans=0;
    f(i,0,m+1){
        double bb=b[i];
        if(bb/min!=b[i]/min){
            ans+=b[i]/min+1;
        }
        else{
            ans+=b[i]/min;
        }
    }
    cout<<ans<<endl;
    return 0;
}
