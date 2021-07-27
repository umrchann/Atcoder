#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=998244353;
void chmin(int& a, int b){ if(a > b) a = b; }
void chmax(int& a, int b){ if(a < b) a = b; }
int main(){
    ll n;
    cin>>n;
    ll a[n];
    f(i,0,n){
        cin>>a[i];
    }
    sort(a,a+n);
    vector<pair<ll,ll>> b;
    ll now=a[n-1]/2,now2=a[n-1]/2;
    if(n%2!=0){
        now++;
    }
    f(i,0,n){
        b.push_back(make_pair(min(abs(now-a[i]),abs(now2-a[i])),a[i]));
    }
    sort(b.begin(),b.end());
    cout<<a[n-1]<<" "<<b[0].second<<endl;
    return 0;
}
