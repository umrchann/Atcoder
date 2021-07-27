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
    cin>>n>>m;
    ll aa[m],bb[m];
    G.resize(n);
    f(i,0,m){
        cin>>aa[i]>>bb[i];
        G[aa[i]-1].push_back(bb[i]-1);
    }
    f(i,0,n){
        f(j,0,n){
            v[j]=false;
        }
        dfs(i);
        f(j,0,n){
            if(v[j])ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
