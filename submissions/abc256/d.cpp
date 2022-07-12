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
    vector<pair<ll,ll>> data(n);
    f(i,0,n){
        cin>>data[i].first>>data[i].second;
    }
    sort(data.begin(),data.end());
    ll now_first=data[0].first;
    ll now_second=data[0].second;
    f(i,1,n){
        if(now_second<data[i].first){
            cout<<now_first<<" "<<now_second<<endl;
            now_first=data[i].first;
        }
        if(now_second<data[i].second){
            now_second=data[i].second;
        }
    }
    cout<<now_first<<" "<<now_second<<endl;
    return 0;
}
