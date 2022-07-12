#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
#define ld long double 
using namespace std;
const long long mod=1e9+7;
const long long mod2=998244353;
const long long INF = (1 << 29);
void chmin(int& a, int b){ if(a > b) a = b; }
void chmax(int& a, int b){ if(a < b) a = b; }
using Graph = vector<vector<ll>>; 
void yn2(ll a){
    if(a==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
void yn(bool a){
    puts(a?"Yes":"No");
}
void YN(bool a){
    puts(a?"YES":"NO");
}
int main(){
    ll n,q;
    cin>>n>>q;
    ll a[n],x[q];
    vector <ll> sum(n+1,0);
    f(i,0,n){
        cin>>a[i];
    }
    sort(a,a+n);
    f(i,0,n){
        sum[i+1]+=a[i]+sum[i];
    }
    f(i,0,q){
        cin>>x[i];
        ll l=0,r=n-1;
        while(l<=r){
            ll mid=(l+r)/2;
            if(a[mid]<x[i]){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        cout<<x[i]*l-x[i]*(n-l)+sum[n]-sum[r+1]-sum[l]<<endl;
    }
    return 0;
}
