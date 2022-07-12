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
int main(){
    map<ll,ll> x;
    map<ll,ll> y;
    ll dx,dy;
    f(i,0,3){
        cin>>dx>>dy;
        x[dx]++;
        y[dy]++;
    }
    for(auto &dx:x){
        if(dx.second==1){
            cout<<dx.first<<" ";
        }
    }
    for(auto &dy:y){
        if(dy.second==1){
            cout<<dy.first<<endl;
        }
    }
    return 0;
}
