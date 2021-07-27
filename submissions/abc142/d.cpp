#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
ll gcd(ll a,ll b){
    if(a%b==0){
        return b;
    }
    else{
        return gcd(b,a%b);
    }
}
int main(){
    ll a,b,now;
    cin>>a>>b;
    if(a<b){
        now=gcd(b,a);
    }
    else{
        now=gcd(a,b);
    }
    ll ans=1;
    ll now2=now;
    for(ll i=2;i*i<=now;i++){
        if(now2%i==0){
            ans++;
            while(now2%i==0){
                now2/=i;
            }
        }
        if(now2==1){
            break;
        }
    }
    if(now2!=1){
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}
