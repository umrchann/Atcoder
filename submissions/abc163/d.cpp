#include <bits/stdc++.h>
#define f(i,j,k) for(int i=j;i<=k;i++)
using namespace std;
int main(){
    long long n,m,ans=0;
    cin>>n>>m;
    f(i,m,n+1){
        ans+=i*(n-i+1)+1;
    }
    cout<<ans%1000000007<<endl;
    return 0;
}
