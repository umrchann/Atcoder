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
    ll a,b,c,d,e,f,x;
    cin>>a>>b>>c;
    cin>>d>>e>>f;
    cin>>x;
    ll takahashi=a*b*(x/(a+c))+b*(min(x%(a+c),a));
    ll aoki=d*e*(x/(d+f))+e*(min(x%(d+f),d));
    if(takahashi>aoki){
        cout<<"Takahashi"<<endl;
    }
    else if(takahashi<aoki){
        cout<<"Aoki"<<endl;
    }
    else{
        cout<<"Draw"<<endl;
    }
    return 0;
}
