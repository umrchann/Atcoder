#include <bits/stdc++.h>
#define f(i,j,k)  for(int i=j;i<k;i++)
#define ll long long 
#define ld long double
using namespace std;
int main(){
    ll n,ans=1,mod=pow(10,9)+7;
    string s;
    cin>>n;
    cin>>s;
    map<char,ll> m;
    f(i,0,n){
        m[s[i]]++;
    }
    for(auto x:m){
        ans=ans*(x.second+1)%mod;
    }
    ans--;
    if(ans<0){
        ans+=mod;
    }
    cout<<ans<<endl;
    return 0;
}
