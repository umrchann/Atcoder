#include <bits/stdc++.h>
#define f(i,j,k) for(int i=j;i<k;i++)
#define f2(i,j,k) for(int i=j;i>k;i--)
using namespace std;
int main(){
    long long n,t,ans=0;
    cin>>n>>t;
    long long a[n];
    f(i,0,n){
        cin>>a[i];
    }
    f(i,1,n){
        ans+=min(a[i]-a[i-1],t);
    }
    cout<<ans+t<<endl;
    return 0;
}
