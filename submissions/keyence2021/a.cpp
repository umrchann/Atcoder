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
    ll a[n],b[n],c[n];
    f(i,0,n){
        cin>>a[i];
    }
    f(i,0,n){
        cin>>b[i];
    }
    c[0]=a[0]*b[0];
    f(i,1,n){
        a[i]=max(a[i],a[i-1]);
        c[i]=max(c[i-1],a[i]*b[i]);
    }
    f(i,0,n){
        cout<<c[i]<<endl;
    }
    return 0;
}
