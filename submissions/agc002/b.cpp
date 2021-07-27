#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long
using namespace std;
int main(){
    ll n,m,x,y,ans=0;
    cin>>n>>m;
    ll a[n+1];
    bool b[n+1];
    f(i,1,n+1){
        a[i]=1;
        b[i]=false;
    }
    b[1]=true;
    f(i,0,m){
        cin>>x>>y;
        if(b[x]){
            b[y]=true;
        }
        a[x]-=1;
        a[y]+=1;
        if(a[x]==0){
            b[x]=false;
        }
    }
    f(i,1,n+1){
        if(b[i]){
            ans++;
        }
    }
    cout<<ans<<endl;
}
