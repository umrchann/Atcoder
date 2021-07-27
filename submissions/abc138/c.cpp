#include <bits/stdc++.h>
using namespace std;
#define f(i,j,k) for(int i=j;i<k;i++)
#define f2(i,j,k) for(int i=j;i>=k;i--)
int main(){
    long long n;
    cin>>n;
    long double a[n],ans=0;
    f(i,0,n){
        cin>>a[i];
    }
    sort(a,a+n);
    f2(i,n-1,1){
        ans+=a[i]/pow(2,n-i);
    }
    ans+=a[0]/pow(2,n-1);
    cout<<fixed<<setprecision(5)<<ans<<endl;
    return 0;
}
