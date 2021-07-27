#include <bits/stdc++.h>
#define f(i,j,k)  for(int i=j;i<k;i++)
#define ll long long 
#define ld long double
using namespace std;
int main(){
    ll n,ans=4*pow(10,6);
    cin>>n;
    ll a[n];
    f(i,0,n){
        cin>>a[i];
    }
    sort(a,a+n);
    f(i,a[0],a[n-1]+1){
        ll now=0;
        f(j,0,n){
            now+=pow(a[j]-i,2);
        }
        ans=min(ans,now);
    }
    cout<<ans<<endl;
    return 0;
}
