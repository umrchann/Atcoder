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
    ll n, now=0;
    ll ans[2]={0,0};
    cin>>n;
    string t;
    cin>>t;
    f(i,0,t.size()){
        if(t[i]=='S'){
            ans[now%2]+=pow(-1,now/2+now%2);
        }
        else{
            now++;
        }
    }
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}
