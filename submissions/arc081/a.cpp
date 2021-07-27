#include <bits/stdc++.h>
#define f(i,j,k)  for(int i=j;i<k;i++)
#define ll long long 
using namespace std;
int main(){
    ll n;
    cin>>n;
    ll a[n];
    map<ll,ll> c;
    vector<ll> v{0,0};
    f(i,0,n){
        cin>>a[i];
        c[a[i]]++;
    }
    for(auto [a,b]:c){
        if(b>=2){
            v.push_back(a);
        }
        if(b>=4){
            v.push_back(a);
        }
    }
    sort(v.begin(),v.end(),greater<int>());
    cout<<(ll)v[0]*v[1]<<endl;
    return 0;
}
