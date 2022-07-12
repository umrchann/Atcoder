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
int main(){
    ll n;
    cin>>n;
    vector<pair<ld,ld>> pairs(n);
    f(i,0,n){
        cin>>pairs[i].first>>pairs[i].second;
    }
    ld ans=0;
    f(i,0,n){
        f(j,i+1,n){
            ld x2=(pairs[j].first-pairs[i].first)*(pairs[j].first-pairs[i].first);
            ld y2=(pairs[j].second-pairs[i].second)*(pairs[j].second-pairs[i].second);
            ans=max(ans,sqrt(x2+y2));
        }
    }
    cout<<fixed(6)<<ans<<endl;
    return 0;
}
