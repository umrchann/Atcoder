#include <bits/stdc++.h>
#define f(i,j,k)  for(int i=j;i<k;i++)
#define ll long long 
#define ld long double
using namespace std;
int main(){
    ll n;
    string s;
    cin>>n;
    cin>>s;
    vector<ll> e(n,0);
    ll sum=0;
    f(i,0,n){
        if(s[i]=='E'){
            sum++;
        }
        e[i]=sum;
    }
    ll ans=sum-e[0];
    f(i,1,n){
        ans=min(ans,sum-e[i]+i-e[i-1]);
    }
    cout<<ans<<endl;
    return 0;
}
