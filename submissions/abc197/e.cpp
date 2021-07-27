#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
void chmin(int& a, int b){ if(a > b) a = b; }
void chmax(int& a, int b){ if(a < b) a = b; }

int main(){
    ll n;
    cin>>n;
    ll x,c;
    map<ll, vector<ll>> num;
    f(i,0,n){
        cin>>x>>c;
        num[c].push_back(x);
    }
    vector<pair<ll,ll>> pairs;
    pairs.emplace_back(0,0);
    for(auto &[k, v]:num){
        sort(v.begin(),v.end());
        pairs.emplace_back(v[0],v.back());
    }
    pairs.emplace_back(0,0);
    ll dp_size=pairs.size();
    vector<vector<ll>> dp(dp_size,vector<ll>(2));
    dp[0][0]=0,dp[0][1]=0;
    f(i,1,dp_size){
        ll distance=pairs[i].second-pairs[i].first;
        ll now_left=pairs[i].first,now_right=pairs[i].second;
        ll pre_left=pairs[i-1].first,pre_right=pairs[i-1].second;
        ll left_sum=dp[i-1][0],right_sum=dp[i-1][1];
        dp[i][0]=min(left_sum+abs(now_right-pre_left),right_sum+abs(now_right-pre_right))+distance;
        dp[i][1]=min(left_sum+abs(now_left-pre_left),right_sum+abs(now_left-pre_right))+distance;
        
    }
    cout<<min(dp[dp_size-1][0],dp[dp_size-1][1])<<endl;
    return 0;
}
