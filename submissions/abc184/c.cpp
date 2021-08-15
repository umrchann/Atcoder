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
    string s,t,u;
    ll n,m,k,ans=3,ans2=0;
    ld x,y,z;
    ll r1,r2,c1,c2;
    cin>>r1>>c1>>r2>>c2;
    ll r=r2-r1,c=c2-c1;
    if(!r&&!c){
        ans=0;
    }
    else if(r==c||r==-c||abs(r)+abs(c)<=3){
        ans=1;
    }
    else if((r1+r2+c1+c2)%2==0||abs(r+c)<=3||abs(r-c)<=3||abs(r)+abs(c)<=6){
        ans=2;
    }
    cout<<ans<<endl;
    return 0;
}
