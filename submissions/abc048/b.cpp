#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
int main(){
    ll a,b,x;
    cin>>a>>b>>x;
    if(a%x==0){
        cout<<b/x-a/x+1<<endl;
    }
    else{
        cout<<b/x-a/x<<endl;
    }
    return 0;
}
