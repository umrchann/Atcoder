#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=998244353;
void chmin(int& a, int b){ if(a > b) a = b; }
void chmax(int& a, int b){ if(a < b) a = b; }
int main(){
    ll n,ans=0,a=0,b=0,jud=0;
    cin>>n;
    string s[n];
    f(i,0,n){
        cin>>s[i];
        ll now=0;
        if(s[i][0]=='B'){
            b++;
            now++;
        }
        f(j,0,s[i].size()-1){
            if(s[i][j]=='A'&&s[i][j+1]=='B'){
                ans++;
            }
        }
        if(s[i][s[i].size()-1]=='A'){
            a++;
            now++;
        }
        if(now==2){
            jud++;
        }
    }
    if(a==b&&a==jud&&a!=0){
        ans--;
    }
    cout<<ans+min(a,b)<<endl;
    return 0;
}
