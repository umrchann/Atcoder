#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;

int main(){
    ll n;
    cin>>n;
    ll a[n],b[n];
    ll ans=2*pow(10,5);
    vector<ll> cnt(pow(10,5),0);
    vector<ll> cnt2(pow(10,5),0);
    f(i,0,n){
        cin>>a[i]>>b[i];
        cnt[a[i]-1]++;
        cnt2[b[i]-1]++;
        ans=min(ans,a[i]+b[i]);
    }
    sort(a,a+n);
    sort(b,b+n);
    if(cnt[a[0]-1]==1&&cnt2[b[0]-1]==1){
        if(a[0]+b[0]==ans){
            ans=min(min(max(a[0],b[1]),max(a[1],b[0])),ans);
        }
        else{
            ans=min(max(a[0],b[0]),ans);
        }
    }
    else{
        ans=min(max(a[0],b[0]),ans);
    }
    cout<<ans<<endl;
    return 0;
}
