#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;

int main(){
    ll n,m;
    cin>>n>>m;
    ll a[n];
    vector<vector<ll>> mex(n+1,vector<ll>(0));
    f(i,0,n){
        cin>>a[i];
        mex[a[i]].push_back(i);
    }
    f(i,0,n+1){
        if(mex[i].size()==0||m<=mex[i][0]||mex[i][mex[i].size()-1]<n-m){
            cout<<i<<endl;
            return 0; 
        }
        f(j,0,mex[i].size()-1){
            if(mex[i][j+1]-mex[i][j]>m){
                cout<<i<<endl;
                return 0;
            }
        }
    }
    return 0;
}
