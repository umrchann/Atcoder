#include <bits/stdc++.h>
#define f(i,j,k)  for(int i=j;i<k;i++)
#define ll long long 
using namespace std;
int main(){
    ll n,m;
    cin>>n;
    ll d[n];
    map<ll,ll> a;
    f(i,0,n){
        cin>>d[i];
        a[d[i]]++;
    }
    cin>>m;
    ll t[m];
    f(i,0,m){
        cin>>t[i];
        if(a[t[i]]==0){
            cout<<"NO"<<endl;
            return 0;
        }
        a[t[i]]--;
    }
    cout<<"YES"<<endl;
    return 0;
}
