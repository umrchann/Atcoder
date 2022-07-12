#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define f3(i,j,k,l) for(long long i=j;i<k;i+=l)
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
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n),b(n);
    f(i,0,n){
        cin>>a[i];
        b[i]=a[i];
    }
    f(i,0,k){
        vector<ll> data;
        f3(j,i,n,k){
            data.push_back(a[j]);
        }
        sort(data.begin(),data.end());
        ll step=0;
        for (auto&x:data){
            b[i+step]=x;
            step+=k;
        }
    }
    sort(a.begin(),a.end());
    f(i,0,n){
        if(a[i]!=b[i]){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}

