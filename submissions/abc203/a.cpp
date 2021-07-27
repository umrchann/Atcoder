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
    string s,t="d",u="d";
    ll a,b,c,d,e,n,m,k,ans=0,ans2=0;
    ld x,y,z;
    vector<ll> aa(7,0);
    f(i,0,3){
        cin>>a;
        aa[a]++;
    }
    f(i,1,7){
        if(aa[i]==1){
            ans++;
            ans2=i;
        }
        else if(aa[i]==3){
            cout<<i<<endl;
            return 0;
        }
    }
    if(ans==1){
        cout<<ans2<<endl;
        return 0;
    }
    cout<<0<<endl;
    return 0;
}
