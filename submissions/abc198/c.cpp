#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
void chmin(int& a, int b){ if(a > b) a = b; }
void chmax(int& a, int b){ if(a < b) a = b; }
void answer(ll a){
    if(a==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
int main(){
    long double r,x,y;
    cin>>r>>x>>y;
    long double l=sqrt(x*x+y*y);
    ll ans=l/r;
    if(ans==0){
        cout<<2<<endl;
    }
    else if(ans==l/r){
        cout<<ans<<endl;
    }
    else{
        cout<<ans+1<<endl;
    }
    return 0;
}
