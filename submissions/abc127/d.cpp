#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
int main(){
    ll n,m,now,a,b,c,ans=0;
    cin>>n>>m;;
    priority_queue<pair<ll,ll>> pairs;
    f(i,0,n){
        cin>>a;
        pairs.push(make_pair(a,1));
    }
    f(i,0,m){
        cin>>b>>c;
        pairs.push(make_pair(c,b));
    }
    now=n;
    while(1){
        auto p=pairs.top();
        pairs.pop();
        if(now>=p.second){
            ans+=p.first*p.second;
            now-=p.second;
        }
        else{
            ans+=p.first*now;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
