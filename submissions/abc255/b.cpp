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
    ll n,k;
    cin>>n>>k;
    ll a[k];
    ld x[n],y[n];
    f(i,0,k){
        cin>>a[i];
    }
    f(i,0,n){
        cin>>x[i]>>y[i];
    }
    vector<ld> ans(n,INF);
    f(i,0,k){
        f(j,0,n){
            ans[j]=min(ans[j],sqrt(pow(x[a[i]-1]-x[j],2)+pow(y[a[i]-1]-y[j],2)));
        }
    }
    sort(ans.begin(),ans.end());
    cout<<fixed << setprecision(6)<< ans[n-1]<<endl;
    return 0;
}
