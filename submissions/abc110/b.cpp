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
    string s,t,u;
    ll a,b,c,d,e,n,m,k,ans=1001;
    ld x,y,z,ans2=0;
    cin>>n>>m>>a>>b;
    ll aa[n],bb[m];
    f(i,0,n){
        cin>>aa[i];
    }
    sort(aa,aa+n);
    f(i,0,m){
        cin>>bb[i];
    }
    sort(bb,bb+m);
    if(min(bb[0],b)>max(aa[n-1],a)){
        cout<<"No War"<<endl;
    }
    else{
        cout<<"War"<<endl;
    }
    return 0;
}
