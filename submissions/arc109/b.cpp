#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
int main(){
    ll n;
    cin>>n;
    ll now=1;
    if(n==1||n==2){
        cout<<1<<endl;
        return 0;
    }
    while(now<n){
        if(now*(now+1)>2*(n+1)){
            break;
        }
        now++;
    }
    cout<<n+2-now<<endl;
    return 0;
}
