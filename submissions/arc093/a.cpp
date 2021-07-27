#include <bits/stdc++.h>
#define f(i,j,k)  for(int i=j;i<k;i++)
#define ll long long 
using namespace std;
int main(){
    ll n,ans=0;
    cin>>n;
    ll a[n+2];
    a[0]=0;
    a[n+1]=0;
    vector <ll> b(n+2,0);
    cin>>a[1];
    b[1]+=abs(a[1]-a[0]);
    ans+=abs(a[1]-a[0]);
    f(i,2,n+1){
        cin>>a[i];
        b[i-1]+=abs(a[i]-a[i-1]);
        b[i]+=abs(a[i]-a[i-1]);
        ans+=abs(a[i]-a[i-1]);
    }
    b[n]+=abs(a[n+1]-a[n]);
    ans+=abs(a[n+1]-a[n]);
    f(i,1,n+1){
        cout<<ans-b[i]+abs(a[i-1]-a[i+1])<<endl;
    }
    return 0;
}
