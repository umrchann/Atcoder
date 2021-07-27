#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
const long long mod2=998244353;
const long long INF = (1 << 29);
void chmin(int& a, int b){ if(a > b) a = b; }
void chmax(int& a, int b){ if(a < b) a = b; }
void answer(ll a){
    if(a==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
ll n,a[100001],b[100001],dist[100001];
vector<ll> G[100001];
void solve(ll start){
    f(i,1,n+1){
        dist[i]=INF;
    }
    queue <ll> Q;
    Q.push(start);
    dist[start]=0;
    while(!Q.empty()){
        ll now=Q.front();
        Q.pop();
        for(ll i:G[now]){
            if(dist[i]==INF){
                dist[i]=dist[now]+1;
                Q.push(i);
            }
        }
    }
}
int main(){
    cin>>n;
    f(i,0,n-1){
        cin>>a[i]>>b[i];
        G[a[i]].push_back(b[i]);
        G[b[i]].push_back(a[i]);
    }
    ll id1=-1,id2=-1,ans1=-1,ans2=-1;
    solve(1);
    f(i,1,n+1){
        if(ans1<dist[i]){
            ans1=dist[i];
            id1=i;
        }
    }
    solve(id1);
    f(i,1,n+1){
        ans2=max(ans2,dist[i]);
    }
    cout<<ans2+1<<endl;
    return 0;
}
