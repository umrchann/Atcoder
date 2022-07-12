#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define fixed(i) fixed<<setprecision(i)
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
    ll n,w;
    cin>>n>>w;
    ll a[n],sum=0;
    vector<ll> ans(w+1,0);
    f(i,0,n){
        cin>>a[i];
        if(a[i]<=w){
            ans[a[i]]++;
        }
    }
    f(i,0,n-1){
        f(j,i+1,n){
            if(a[i]+a[j]<=w){
                ans[a[i]+a[j]]++;
            }
        }
    }
    f(i,0,n-2){
        f(j,i+1,n-1){
            f(k,j+1,n){
                if(a[i]+a[j]+a[k]<=w){
                    ans[a[i]+a[j]+a[k]]++;
                }
            }
        }
    }
    f(i,1,w+1){
        if(ans[i]!=0){
            sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
}
