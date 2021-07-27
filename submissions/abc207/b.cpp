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
using Graph = vector<vector<int>>; // グラフ型
Graph G; // グラフ
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
    ll a,b,c,d,e,n,m,k,ans=0,ans2=0;
    ld x,y,z;
    cin>>a>>b>>c>>d;
    ans=a;
    ans2=0;
    ll i=0;
    if(b>=c*d){
        cout<<-1<<endl;
        return 0;
    }
    while(1){
        if(ans<=ans2*d){
            cout<<i<<endl;
            return 0;
        }
        ans+=b;
        ans2+=c;
        i++;
    }
    return 0;
}
