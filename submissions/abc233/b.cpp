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
void yn(bool a){
    puts(a?"Yes":"No");
}
void YN(bool a){
    puts(a?"YES":"NO");
}
void answer(vector<ll> &a,ll n){
    f(i,0,n){
        if(i!=0){
            cout<<" ";
        }
        cout<<a[i];
    }
}
vector<ll> x={1,1,1,0,0,-1,-1,-1},y={1,0,-1,1,-1,1,0,-1};
int main(){
    string s;
    ll l,r;
    cin>>l>>r;
    cin>>s;
    string a,b,c;
    a=s.substr(0,l-1);
    b=s.substr(l-1,r-l+1);
    c=s.substr(r);
    reverse(b.begin(),b.end());
    cout<<a+b+c<<endl;
    return 0;
}
