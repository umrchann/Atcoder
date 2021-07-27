#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
ll nCr(int n, int r) {
    ll ans = 1;
    f2(i,n,n-r+1){
        ans*=i;
        ans/=(n-i+1);
    }
    return ans;
}
int main(){
    ll l;
    cin>>l;
    l-=12;
    cout<<nCr(l+11,11)<<endl;
    return 0;
}
