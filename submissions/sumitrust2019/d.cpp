#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=998244353;
void chmin(int& a, int b){ if(a > b) a = b; }
void chmax(int& a, int b){ if(a < b) a = b; }
int main(){
    ll n,ans=0;
    cin>>n;
    string s;
    cin>>s;
    map<string,ll> a;
    f(i,0,1000){
        ll c[3]={i/100,(i/10)%10,i%10};
        ll now=0;
        f(j,0,n){
            if(s[j]==('0'+c[now])){
                now++;
            }
            if(now==3){
                break;
            }
        }
        if(now==3){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
