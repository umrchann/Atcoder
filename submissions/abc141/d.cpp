#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
int main(){
    ll n,m,now;
    cin>>n>>m;
    priority_queue<ll> a;
    f(i,0,n){
        cin>>now;
        a.push(now);
    }
    f(i,0,m){
        now=a.top();
        a.pop();
        a.push(now/2);
    }
    ll sum=0;
    f(i,0,n){
        sum+=a.top();
        a.pop();
    }
    cout<<sum<<endl;
    return 0;
}
