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
void yn(bool a){
    puts(a?"Yes":"No");
}
void YN(bool a){
    puts(a?"YES":"NO");
}
int main(){
    string s,t,u;
    ll a,b,c,d,e,n,k,ans=0;
    ld x,y,z;
    cin>>n;
    pair<ll,ll> p[n];
    f(i,0,n){
        cin>>a>>b;
        p[i]=make_pair(a+b,a-b);
    }
    sort(p,p+n);
    c=(-1)*pow(10,9);
    f(i,0,n){
        if(c<=p[i].second){
            ans++;
            c=p[i].first;
        }
    }
    cout<<ans<<endl;
    return 0;
}
