#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
const ll infl = 1LL << 60;
template<typename T> using min_priority_queue = priority_queue<T, vector<T>, greater<T>>;
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }
ll n,m;
void ans(ll l,ll r,vector <pair<ll,ll>> pairs,ll *x){
    vector <ll> box;
    vector <ll> use(n,0);
    f(i,0,l-1){
        box.push_back(x[i]);   
    }
    f(i,r,m){
        box.push_back(x[i]);   
    }
    sort(box.begin(),box.end());
    ll total=0;
    for(auto &nowbox:box){
        f(i,0,n) {
            if(pairs[i].second<=nowbox&&use[i]==0){
                total+=pairs[i].first;
                use[i]++;
                break;
            }
        }
    }
    cout<<total<<endl;
}

int main(){
    ll q,l,r;
    cin>>n>>m>>q;
    ll w,v,x[m];
    vector <pair<ll,ll>> pairs(n);
    f(i,0,n){
        cin>>w>>v;
        pairs[i]=make_pair(v,w);
    }
    sort(pairs.begin(), pairs.end());
    reverse(pairs.begin(), pairs.end());
    f(i,0,m){
        cin>>x[i];
    }
    f(i,0,q){
        cin>>l>>r;
        ans(l,r,pairs,x);
    }
    return 0;
}
