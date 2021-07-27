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
void yn(ll a){
    if(a==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
int main(){
    string s,t;
    ll a,b,c,d,e,n,k,ans=0;
    ld x,y,z;
    cin>>a>>b;
    if(a<=9&&b<=9){
        cout<<a*b<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}
