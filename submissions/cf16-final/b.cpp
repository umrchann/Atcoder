#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
int main(){
    ll n;
    cin>>n;
    ll sum=0;
    vector<ll> ans;
    f(i,1,n+1){
        sum+=i;
        if(sum>=n){
            ans.push_back(i);
            break;
        }
        ans.push_back(i);
    }
    for(auto x:ans){
        if(x!=sum-n){
            cout<<x<<endl;
        }
    }
    return 0;
}
