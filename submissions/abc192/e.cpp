#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
const ll infl = 1LL << 60;
ll n,m,x,y,a[101010],b[101010],t[101010],k[101010];
vector<ll> D(101010,infl),vis(101010,0);
vector<pair<ll, pair<ll,ll>>> E[101010];
template<typename T> using min_priority_queue = priority_queue<T, vector<T>, greater<T>>;
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

ll dijk() {
    min_priority_queue<pair<ll, ll>> que;

    D[x] = 0;
    que.push({ 0, x });

    while (!que.empty()) {//幅優先
        auto q = que.top(); 
        que.pop();

        ll cst = q.first;
        ll cu = q.second;

        if (cu == y) return D[y];

        if (vis[cu]) continue;
        vis[cu] = 1;
        for(auto &p:E[cu]) {
            ll to = p.first;
            ll T = p.second.first;
            ll K = p.second.second;

            ll cst2 = (cst + K - 1) / K * K + T;
            if (chmin(D[to], cst2)) que.push({ D[to], to });
        }
    }

    return -1;
}

int main(){
    cin>>n>>m>>x>>y;
    x--;y--;
    f(i,0,m){
        cin>>a[i]>>b[i]>>t[i]>>k[i];
        a[i]--;
        b[i]--;
        E[a[i]].push_back({ b[i], {t[i], k[i]} });
        E[b[i]].push_back({ a[i], {t[i], k[i]} });
    }
    cout<<dijk()<<endl;
    return 0;
}
