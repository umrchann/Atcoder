#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=998244353;
void chmin(int& a, int b){ if(a > b) a = b; }
void chmax(int& a, int b){ if(a < b) a = b; }
int main(){
    ll n,x=0,ans=0;
    cin>>n;
    ll a[n];
    f(i,0,n){
        cin>>a[i];
        if(a[i]<0){
            x++;
            a[i]*=-1;
        }
    }
    sort(a,a+n);
    if(x%2==1){
        a[0]*=-1;
    }
    f(i,0,n){
        ans+=a[i];
    }
    cout<<ans<<endl;
    return 0;
}
