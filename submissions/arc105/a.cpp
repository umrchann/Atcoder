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
    ll a,b,c,d,e,n,k,ans=0;
    ld x,y,z;
    ll aa[4];
    f(i,0,4){
        cin>>aa[i];
    }
    sort(aa,aa+4);
    if(aa[0]+aa[3]==aa[1]+aa[2]||aa[0]+aa[1]+aa[2]==aa[3]){
        yn(0);
    }
    else{
        yn(1);
    }
    return 0;
}
