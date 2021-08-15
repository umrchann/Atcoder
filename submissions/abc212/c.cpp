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
    ll n,m,k,ans=pow(10,9)+1,ans2=0;
    ld x,y,z;
    cin>>n>>m;
    ll a[n],b[m];
    f(i,0,n){
        cin>>a[i];
    }
    sort(a,a+n);
    f(i,0,m){
        cin>>b[i];
    }
    sort(b,b+m);
    ll nowa=0,nowb=0;
    while((nowa<n)&&(nowb<m)){
        ans=min(ans,abs(a[nowa]-b[nowb]));
        if(a[nowa]<b[nowb]){
            nowa++;
        }
        else{
            nowb++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
