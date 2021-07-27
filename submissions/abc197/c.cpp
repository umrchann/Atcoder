#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
void chmin(int& a, int b){ if(a > b) a = b; }
void chmax(int& a, int b){ if(a < b) a = b; }

int main(){
    ll n;
    cin>>n;
    ll a[n];
    f(i,0,n){
        cin>>a[i];
    }
    ll res = 2000000000;
    f(i,0,1<<(n-1)){
        ll xored=0;
        ll ored=0;
        f(j,0,n+1){
            if(j<n){
                ored|=a[j];
            }
            if(j==n||(i>>j&1)){
                xored^=ored;
                ored=0;
            }
        }
        res=min(res,xored);
    }
    cout<<res<<endl;
    return 0;
}
