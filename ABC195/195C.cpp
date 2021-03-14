#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
int main(){
    ll n,i=1,ans=0;
    cin>>n;
    while(1){
        ll now=n/pow(10,i*3);
        if(now==0){
            n-=pow(10,(i-1)*3);
            break;
        }
        else{
            ans+=(i-1)*(pow(10,i*3)-pow(10,(i-1)*3));
            i++; 
        }
    }
    ans+=(i-1)*(n+1);
    cout<<ans<<endl;
    return 0;
}
