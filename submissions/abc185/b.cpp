#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
int main(){
    ll n,m,t;
    cin>>n>>m>>t;
    ll a[m],b[m];
    f(i,0,m){
        cin>>a[i]>>b[i];
    }
    ll nn=n;
    ll now=0;
    f(i,0,m){
        nn-=a[i]-now;
        if(nn<=0){
            cout<<"No"<<endl;
            return 0;
        }
        nn+=b[i]-a[i];
        if(nn>n){
            nn=n;
        }
        now=b[i];
    }
    nn-=t-now;
    if(nn<=0){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
    return 0;
}
