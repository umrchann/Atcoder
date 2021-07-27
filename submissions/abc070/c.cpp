#include <bits/stdc++.h>
#define f(i,j,k)  for(int i=j;i<k;i++)
#define ll long long 
#define ld long double
using namespace std;
ll gcd(ll x,ll y){
    if(x%y==0){
        return y;
    }
    else{
        return gcd(y,x%y);
    }
}
ll minb(ll x,ll y){
    return x/gcd(x,y)*y;
}
int main(){
    ll n;
    ll ans;
    cin>>n;
    ll t[n];
    f(i,0,n){
        cin>>t[i];
    }
    sort(t,t+n);
    ans=t[n-1];
    f(i,0,n-1){
        ans=minb(ans,t[i]);
    }
    cout<<ans<<endl;
    return 0;
}
