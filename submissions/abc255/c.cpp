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
    ll x,a,d,n;
    cin>>x>>a>>d>>n;
    if(d<0){
        a=a+d*(n-1);
        d=-d;
    }
    if (x>=a&&x<=a+d*(n-1)){
        if(d==0){
            cout<<0<<endl;
        }
        else{
            cout<<min(abs(x-a)%d,d-abs(x-a)%d)<<endl;
        }
    }
    else if(x<=a){
        cout<<abs(a-x)<<endl;
    }
    else if(x>=a+d*(n-1)){
        cout<<abs(x-a-d*(n-1))<<endl;
    }
    return 0;
}
