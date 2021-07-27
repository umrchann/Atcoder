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
void re(ll a){
    if(a<206){
        cout<<"Yay!"<<endl;
    }
    else if(a==206){
        cout<<"so-so"<<endl;
    }
    else{
        cout<<":("<<endl;
    }
}
typedef pair<int, int> P;  // first: 最短距離, second: 頂点番号
int main(){
    string s,t,u;
    ll a,b,c,d,e,n,m,k,ans=0,ans2=0;
    ld x,y,z;
    cin>>n>>m;
    Graph G(n);
    f(i,0,m) {
        cin >> a >> b;
        G[a-1].push_back(b-1);
        G[b-1].push_back(a-1);
    }
    vector<ll> dist(n, -1);
    vector<ll> count(n,0);
    queue<ll> que;
    dist[0] = 0;
    count[0]=1;
    que.push(0); 
    while (!que.empty()) {
        int v = que.front(); 
        que.pop();
        for (int nv : G[v]) {
            if (dist[nv] != -1){
                if(dist[nv]>dist[v]){
                    count[nv]+=count[v]%mod;
                }
                continue;
            }
            dist[nv] = dist[v] + 1;
            count[nv] += count[v]%mod;
            que.push(nv);
        }
    }

    cout<<count[n-1]%mod<<endl;
    return 0;
}
