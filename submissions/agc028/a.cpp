#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
ll gcd(ll x,ll y){
    if(x%y==0){
        return y;
    }
    else{
        return gcd(y,x%y);
    }
}

ll lcm(ll x,ll y){
    return x*y/gcd(x,y);
}

int main(){
    ll n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    ll N=n/gcd(n,m);
    ll M=m/gcd(n,m);
    f(k,0,gcd(n,m)){
        if(s[k*N]!=t[k*M]){
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<<lcm(n,m)<<endl;
    return 0;
}
