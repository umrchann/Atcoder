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
void answer(ll a){
    if(a==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
int main(){
    string s,t;
    ll a,b,c,ans=0,n;
    cin>>s;
    vector<ll> aa(26,0);
    f(i,0,4){
        aa[s[i]-'A']++;
    }
    f(i,0,26){
        if(aa[i]!=0&&aa[i]!=2){
            answer(1);
            return 0;
        }
    }
    answer(0);
    return 0;
}
