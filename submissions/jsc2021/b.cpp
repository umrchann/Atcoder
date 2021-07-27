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
void yn(ll a){
    if(a==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    string s,t,u;
    ll a,b,c,d,e,n,k,ans=0;
    ld x,y,z;
    vector <ll> aa(1001,0),bb(1001,0);
    cin>>n>>k;
    f(i,0,n){
        cin>>a;
        aa[a]++;
    }
    f(i,0,k){
        cin>>b;
        bb[b]++;
    }
    f(i,1,1001){
        if(aa[i]==0&&bb[i]==0){
            continue;
        }
        else if(aa[i]==0||bb[i]==0){
            if(ans==0){
                cout<<i;
            }
            else{
                cout<<" "<<i;
            }
            ans++;
        }
    }
    return 0;
}
