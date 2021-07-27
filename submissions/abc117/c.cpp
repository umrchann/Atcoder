#include <bits/stdc++.h>
#define f(i,j,k)  for(int i=j;i<k;i++)
#define ll long long 
using namespace std;
int main(){
    ll n,m;
    cin>>n>>m;
    ll x[m];
    f(i,0,m){
        cin>>x[i];
    }
    if(n>=m){
        cout<<0<<endl;
        return 0;
    }
    sort(x,x+m);
    ll l[m-1];
    f(i,0,m-1){
        l[i]=x[i+1]-x[i];
    }
    sort(l,l+m-1);
    reverse(l,l+m-1);
    ll ans=x[m-1]-x[0];
    f(i,0,n-1){
        ans-=l[i];
    }
    cout<<ans<<endl;
    return 0;
}
