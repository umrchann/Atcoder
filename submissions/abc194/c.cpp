#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;

int main(){
    ll n;
    cin>>n;
    ll a[n];
    ll sum=0,sum2=0;
    f(i,0,n){
        cin>>a[i];
        sum+=a[i]*a[i]*(n-1);
        sum2+=a[i];
    }
    f(i,0,n){
        sum2-=a[i];
        sum-=2*a[i]*sum2;
    }
    cout<<sum<<endl;
    return 0;
}
