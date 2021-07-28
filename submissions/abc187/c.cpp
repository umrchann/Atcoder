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
    ll n,m,k;
    ld x,y,z;
    cin>>n;
    map<string,ll> mp;
    f(i,0,n){
        cin>>s;
        if(s[0]=='!'){
            s.erase(s.begin());
            mp[s]+=3*pow(10,5);
        }
        else{
            mp[s]++;
        }
    }
    for (auto &i:mp){
        if(i.second>=3*pow(10,5)&&i.second%3*pow(10,5)!=0){
            cout<<i.first<<endl;
            return 0;
        }
    }
    cout<<"satisfiable"<<endl;
    return 0;
}
