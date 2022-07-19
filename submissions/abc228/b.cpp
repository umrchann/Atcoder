#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define fixed(i) fixed<<setprecision(i)
#define ll long long 
#define ld long double 
using namespace std;
const long long mod=1e9+7;
const long long mod2=998244353;
const long long INF = (1 << 29);
void yn(bool a){
    puts(a?"Yes":"No");
}
void YN(bool a){
    puts(a?"YES":"NO");
}
void answer(vector<ll> &a,ll n){
    f(i,0,n){
        if(i!=0){
            cout<<" ";
        }
        cout<<a[i];
    }
}
vector<ll> x={1,1,1,0,0,-1,-1,-1},y={1,0,-1,1,-1,1,0,-1};
int main(){
    ll n,x;
    cin>>n>>x;
    x--;
    ll a[n];
    f(i,0,n){
        cin>>a[i];
        a[i]--;
    }
    vector<ll> v(n);
    deque<ll> que;
    que.push_front(x);
    v[x]++;
    ll ans=1;
    while(!que.empty()){
        ll now=que.front();
        que.pop_front();
        if(v[a[now]]==0){
            ans++;
            v[a[now]]++;
            que.push_front(a[now]);
        }
    }
    cout<<ans<<endl;
    return 0;
}
