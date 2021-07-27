#include <bits/stdc++.h>
#define f(i,j,k)  for(int i=j;i<k;i++)
#define ll long long 
using namespace std;
int main(){
    ll n,a,b;
    cin>>n;
    vector<pair<ll,ll>> pairs(n);
    f(i,0,n){
        cin>>a>>b;
        pairs[i]=make_pair(b,a);
    } 
    sort(pairs.begin(),pairs.end());
    ll ans=0;
    f(i,0,n){
        ans+=pairs[i].second;
        if(ans>pairs[i].first){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}
