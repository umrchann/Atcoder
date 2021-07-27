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
bool v[2000];
Graph G;
void dfs(int i){
	if(v[i])return;
	v[i]=true;
	for(auto vv:G[i])dfs(vv);
}
int main(){
    string s,t,u;
    ll a,b,c,d,e,n,m,k,ans=0,ans2=0;
    ld x,y,z;
    cin>>n;
    ans=n;
    for(ll i=1;pow(2,i)<=n;i++){
        ll now=pow(2,i);
        a=n/now;
        b=i;
        c=n%now;
        ans=min(a+b+c,ans);
    }
    cout<<ans<<endl;
    return 0;
}
