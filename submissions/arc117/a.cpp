#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
const long long mod2=998244353;
void chmin(int& a, int b){ if(a > b) a = b; }
void chmax(int& a, int b){ if(a < b) a = b; }
void answer(ll a){
    if(a==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
int main(){
    ll a,b,now=1;
    cin>>a>>b;
    ll ans[a+b];
    f(i,0,a){
        ans[i]=now+i;
    }
    f(i,a,a+b){
        ans[i]=a-now-i;
    }
    if(a<b){
        ans[a-1]+=(b+1)*b/2-(a+1)*a/2;
    }
    else{
        ans[a+b-1]+=(b+1)*b/2-(a+1)*a/2;
    }
    f(i,0,a+b-1){
        cout<<ans[i]<<" ";
    }
    cout<<ans[a+b-1]<<endl;
    return 0;
}
