#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
#define ld long double 
using namespace std;
using Graph = vector<vector<ll>>;
const long long mod=1e9+7;
const long long mod2=998244353;
const long long INF = (1 << 29);
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
    string s;
    ll n,k;
    ld x,y,z;
    cin>>n;
    ll N=pow(2,n);
    vector<pair<ll,ll>> a,b;
    f(i,0,N/2){
        cin>>k;
        a.push_back(make_pair(k,i+1));
    }
    f(i,0,N/2){
        cin>>k;
        b.push_back(make_pair(k,i+N/2+1));
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a.back().first>b.back().first){
        cout<<b.back().second<<endl;
    }
    else{
        cout<<a.back().second<<endl;
    }
    return 0;
}
