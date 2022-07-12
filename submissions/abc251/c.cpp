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
    string s[n];
    ll t[n];
    map <string,ll> mp;
    f(i,0,n){
        cin>>s[i]>>t[i];
        if(mp[s[i]]!=0){
            t[i]=0;
        }
        mp[s[i]]++;
    }
    ll ans=0,ans_i=0;
    f(i,0,n){
        if(ans<t[i]){
            ans=t[i];
            ans_i=i;
        }
    }
    cout<<ans_i+1<<endl;
    return 0;
}
