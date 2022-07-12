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
    ll n;
    cin>>n;
    vector<ll> past;
    f(i,1,n+1){
        vector<ll> now(i+1,1);
        f(j,1,i-1){
            now[j]=past[j]+past[j-1];
        }
        past=now;
        f(j,0,i){
            cout<<past[j];
            if(j!=i-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

