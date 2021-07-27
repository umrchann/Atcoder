#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
int main(){
    bool j=true;
    ll n,m,c,d;
    cin>>n>>m;
    ll a[n],b[n],ansa=0,ansb=0;
    vector <ll>now(n,0);
    f(i,0,n){
        cin>>a[i];
    }
    f(i,0,n){
        cin>>b[i];
        if(a[i]!=b[i]){
            j=false;
        }
    }
    f(i,0,m){
        cin>>c>>d;
        if(now[c-1]==0){
            ansa+=a[c-1];
            ansb+=b[c-1];
            now[c-1]++;
        }
        if(now[d-1]==0){
            ansa+=a[d-1];
            ansb+=b[d-1];
            now[d-1]++;
        }
    }
    if(ansa==ansb&&ansa!=0){
        cout<<"Yes"<<endl;
    }
    else if(j){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
