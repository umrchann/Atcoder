#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
int main(){
    ll h,w;
    cin>>h>>w;
    ll now=101,a[h][w];
    f(i,0,h){
        f(j,0,w){
            cin>>a[i][j];
            now=min(now,a[i][j]);
        }
    }
    ll ans=0;
    f(i,0,h){
        f(j,0,w){
            ans+=a[i][j]-now;
        }
    }
    cout<<ans<<endl;
    return 0;
}
