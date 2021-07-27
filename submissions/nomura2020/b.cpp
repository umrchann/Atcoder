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
    string s,t,u;
    ll a,b,c,d,e,n,k;
    ld x,y,z,ans=1/pow(10,18);
    cin>>t;
    if(t[0]=='?'){
        t[0]='D';
    }
    f(i,1,t.size()){
        if(t[i]=='?'){
            t[i]='D';
        }
    }
    cout<<t<<endl;
    return 0;
}
