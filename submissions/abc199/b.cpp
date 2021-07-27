#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
const long long mod2=998244353;
void chmin(int& a, int b){ if(a > b) a = b; }
void chmax(int& a, int b){ if(a < b) a = b; }
void answer(ll a){
    if(a==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
int main(){
    ll n;
    cin>>n;
    ll a[n],b[n];
    f(i,0,n){
        cin>>a[i];
    }
    f(i,0,n){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    if(b[0]<a[n-1]){
        cout<<0<<endl;
    }
    else{
        cout<<b[0]-a[n-1]+1<<endl;
    }
    return 0;
}
