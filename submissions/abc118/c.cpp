#include <bits/stdc++.h>
#define f(i,j,k)  for(int i=j;i<k;i++)
#define ll long long 
#define ld long double
using namespace std;
ll gcd(ll x,ll y){
    if(y%x==0){
        return x;
    }
    else{
        return gcd(y%x,x);
    }
}

int main(){
    ll n;
    cin>>n;
    ll a[n];
    f(i,0,n){
        cin>>a[i];
    }
    sort(a,a+n);
    ll now=gcd(a[0],a[1]);
    f(i,2,n){
        now=gcd(now,a[i]);
    }
    cout<<now<<endl;
    return 0;
}
