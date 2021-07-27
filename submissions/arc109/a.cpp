#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
int main(){
    ll a,b,x,y,now;
    cin>>a>>b>>x>>y;
    ll ans=0;
    if(2*x<y){
        y=2*x;
    }
    if(a>b){
        ans+=x;
        now=a-b-1;
    }
    else if(a==b){
        ans=x;
        now=0;
    }
    else{
        ans+=x;
        now=b-a;
    }
    cout<<ans+y*now<<endl;
    return 0;
}
