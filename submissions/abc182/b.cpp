#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
int main(){
    ll n;
    cin>>n;
    ll a[n],sum=0,ans=1;
    f(i,0,n){
        cin>>a[i];
    }
    f(i,2,1001){
        ll now=0;
        f(j,0,n){
            if(a[j]%i==0){
                now++;
            }
        }
        if(sum<now){
            sum=now;
            ans=i;
        }
    }
    cout<<ans<<endl;
    return 0;
}
