#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
int main(){
    ll n,k;
    cin>>n>>k;
    vector<vector<ll>> t(n,vector<ll>(n));
    f(i,0,n){
        f(j,0,n){
            cin>>t[i][j];
        }
    }
    vector<ll> index;
    f(i,0,n){
        index.push_back(i);
    }
    ll ans=0;
    do{
        ll now=0;
        f(i,0,n){
            now+=t[index[i]][index[(i+1)%n]];
        }
        if(now==k){
            ans++;
        }
    }while(next_permutation(index.begin()+1, index.end()));
    cout<<ans<<endl;
}
