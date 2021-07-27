#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
int main(){
    ll n,k,ans=0,sum=0,r=0;
    cin>>n>>k;
    ll a[n];
    f(i,0,n){
        cin>>a[i];
    }
    f(l,0,n){
        while(1){
            if(r==n||sum>=k){
                break;
            }
            else{
                sum+=a[r];
                r++;
            }
        }
        if(sum<k){
            break;
        }
        ans+=n-r+1;
        sum-=a[l];
    }
    cout<<ans<<endl;
    return 0;
}
