#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=998244353;
void chmin(int& a, int b){ if(a > b) a = b; }
void chmax(int& a, int b){ if(a < b) a = b; }
int main(){
    ll n,x,y;
    cin>>n>>x>>y;
    ll a[n];
    f(i,0,n){
        a[i]=0;
    }
    f(i,1,n){
        f(j,i+1,n+1){
            ll now=min(abs(j-i),abs(x-i)+1+abs(y-j));
            //now=min(now,abs(x-j)+1+abs(y-i));
            a[now]++;
        }
    }
    f(i,1,n){
        cout<<a[i]<<endl;
    }
    return 0;
}
