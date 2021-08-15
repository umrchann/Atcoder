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
vector<bool> v;
vector<ll> ans;
void dfs(const Graph &G, ll i,ll p) {
    v[i]=true;
    ans.push_back(i);
    for (auto nexti : G[i]) { 
        if (v[nexti]) continue; // next_v が探索済だったらスルー
        dfs(G,nexti,i); // 再帰的に探索
    }
    ans.push_back(p);
}
int main(){
    string s,t,u;
    ll n,m,k,a,b;
    ld x,y,z;
    cin>>n>>m;
    f(i,0,500){
        ll now=n;
        now^=i;
        if(now==m){
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}
