#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
ll gcd(ll x,ll y){
    if(x%y==0){
        return y;
    }
    else{
        return gcd(y,x%y);
    }
}
ll gg(ll x,ll y){
    return x*y/gcd(x,y);
}
const long long mod=1e9+7;
int main(){
    ll n;
    ll ans=6;
    cin>>n;
    if(n==2){
        cout<<3<<endl;
    }
    else if(n==3){
        cout<<7<<endl; 
    }
    else{
        f(i,4,n+1){
            ans=gg(ans,i);
        }
        cout<<ans+1<<endl;
    }
    return 0;
}
