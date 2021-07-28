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
    ll n,K,k;
    char c;
    cin>>n>>K;
    vector<ll> a(n+1,K);
    vector<ll> b(n+1,0);
    f(i,0,K){
        cin>>c>>k;
        b[k]++;
        f(j,1,n+1){
            if(c=='L'&&j<=k){
               a[j]--; 
            }
            if(c=='R'&&k<=j){
                a[j]--;
            }
        }
    }
    ll ans=1;
    f(i,1,n+1){
        if(b[i]==0&&a[i]>0){
            ans*=a[i];
            ans=ans%mod2;
        }
    }
    cout<<ans<<endl;
    return 0;
}

