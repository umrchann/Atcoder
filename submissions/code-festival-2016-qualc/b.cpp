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
    string s,t,u;
    ll a,b,c,d,e,n,k,ans=0;
    ld x,y,z,ans2=0;
    cin>>k>>n;
    if(n==1){
        cin>>a;
        cout<<a-1<<endl;
        return 0;
    }
    ll aa[n];
    f(i,0,n){
        cin>>aa[i];
        ans+=aa[i];
    }
    sort(aa,aa+n);
    a=min(ans-aa[n-1]+1,(k+1)/2);
    b=0;
    cout<<max(b,aa[n-1]-a)<<endl;
    return 0;
}
