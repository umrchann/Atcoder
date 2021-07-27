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
    string s,t="d",u="d";
    ll a,b,c,d,e,n,m,k,ans=0,ans2=0;
    ld x,y,z;
    cin>>n>>k;
    vector <pair<long long,long long> > pairs(n);
    f(i,0,n){
        cin>>a>>b;
        pairs[i]=make_pair(a,b);
    }
    sort(pairs.begin(),pairs.end());
    f(i,0,n){
        if(pairs[i].first<=k){
            k+=pairs[i].second;
        }
        else{
            cout<<k<<endl;
            return 0;
        }
    }
    cout<<k<<endl;
    return 0;
}
