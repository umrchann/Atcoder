#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
int main(){
    ll n,w;
    cin>>n>>w;
    vector<pair<ll,ll>>event;
    f(i,0,n){
        ll s,t,p;
        cin>>s>>t>>p;
        event.push_back(make_pair(s,p));
        event.push_back(make_pair(t,-p));
    }
    sort(event.begin(),event.end());
    ll now=0;
    for(auto[time,value]:event){
        now+=value;
        if(now>w){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
}
