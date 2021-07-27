#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
int main(){
    ll n,now=10,ans=0;
    cin>>n;
    if(n%2==1){
        cout<<0<<endl;
    }
    else{
        while(n/now!=0){
            ans+=n/now;
            now*=5;
        }
        cout<<ans<<endl;
    }
    return 0;
}
