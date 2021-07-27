#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=998244353;
void chmin(int& a, int b){ if(a > b) a = b; }
void chmax(int& a, int b){ if(a < b) a = b; }
int main(){
    ll n,m=0,ans=1;
    cin>>n;
    map <ll,ll>a;
    ll d[n];
    f(i,0,n){
        cin>>d[i];
        m=max(m,d[i]);
        a[d[i]]++;
    }
    if(d[0]>0||a[0]!=1){
        cout<<0<<endl;
        return 0;
    }
    f(i,1,m){
        f(j,0,a[i+1]){
            ans*=a[i];
            ans%=mod;
        }
    }
    cout<<ans<<endl;
    return 0;
}
