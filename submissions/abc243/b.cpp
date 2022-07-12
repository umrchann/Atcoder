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
    ll a[n],b[n];
    map<ll,ll> data;
    f(i,0,n){
        cin>>a[i];
        data[a[i]]++;
    }
    f(i,0,n){
        cin>>b[i];
        data[b[i]]++;
    }
    ll ans1=0,ans2=0;
    f(i,0,n){
        if(a[i]==b[i])ans1++;
        if(data[a[i]]==2)ans2++;
    }
    cout<<ans1<<endl;
    cout<<ans2-ans1<<endl;
    return 0;
}
