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
    vector <ll> b;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            b.push_back(n/i);
        }
    }
    ll now=1,ans=0;
    while(b.back()/now>=1){
        ans++;
        now*=10;
    }
    cout<<ans<<endl;
    return 0;
}
