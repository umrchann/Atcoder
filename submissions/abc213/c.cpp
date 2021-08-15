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
    ll n,m,k,ans=0,q,now=0;
    ld x,y,z;
    ll h,w;
    cin>>h>>w>>n;
    ll a[n],b[n];
    vector<ll> aa,bb;
    f(i,0,n){
        cin>>a[i]>>b[i];
        aa.push_back(a[i]);
        bb.push_back(b[i]);
    }
    sort(aa.begin(),aa.end());
    sort(bb.begin(),bb.end());
    aa.erase(unique(aa.begin(), aa.end()), aa.end());
    bb.erase(unique(bb.begin(), bb.end()), bb.end());
    f(i,0,n){
        a[i]=lower_bound(aa.begin(), aa.end(), a[i]) - aa.begin()+1;
        b[i]=lower_bound(bb.begin(), bb.end(), b[i]) - bb.begin()+1;
        cout<<a[i]<<" "<<b[i]<<endl;
    }
    return 0;
}
