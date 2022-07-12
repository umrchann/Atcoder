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
typedef pair<int, int> P;  // first: 最短距離, second: 頂点番号
int main(){
    string s,t,u;
    ll a,b,c,d,e,n,m,k,ans=0,ans2=0,now=0;
    ld x,y,z;
    cin>>n;
    vector<ll> aa(360);
    aa[0]++;
    f(i,0,n){
        cin>>a;
        ans=(ans+a)%360;
        aa[ans]++;
    }
    f(i,0,361){
        if(aa[i%360]==1){
            ans2=max(ans2,now);
            now=0;
        }
        now++;
    }
    cout<<ans2<<endl;
    return 0;
}
