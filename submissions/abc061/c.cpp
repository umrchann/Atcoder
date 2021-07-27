#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
int main(){
    ll n,k,a,b;
    cin>>n>>k;
    ll sum=0,ans;
    vector<pair<ll,ll>> c(n);
    f(i,0,n){
        cin>>a>>b;
        c[i]=make_pair(a,b);
    }
    sort(c.begin(), c.end());
    f(i,0,n){
        sum+=c[i].second;
        ans=c[i].first;
        if(sum>=k){
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
