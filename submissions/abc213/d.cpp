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
vector<ll> ans;
void dfs(const Graph &G, ll i,ll p) {
    ans.push_back(i);
    for (ll nexti : G[i]) { 
        if(nexti!=p){
            dfs(G,nexti,i);
            ans.push_back(i);
        }
    }
}
int main(){
    string s,t,u;
    ll n,m,k,a,b;
    ld x,y,z;
    cin>>n;
    Graph G(n+1);
    f(i,0,n-1){
        cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    f(i,1,n+1){
        sort(G[i].begin(), G[i].end());
    }
    dfs(G,1,-1);
    cout<<ans[0];
    f(i,1,ans.size()){
        cout<<" "<<ans[i];
    }
    cout<<endl;
    return 0;
}
