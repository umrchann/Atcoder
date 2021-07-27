#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,ans=1000;
    cin>>n;
    long long a[n+1];
    long long min=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n-1;i++){
        if(a[i]<a[i+1]){
            min=ans/a[i];
            ans=ans%a[i];
        }
        ans+=min*a[i+1];
        min=0;
    }
    cout<<ans<<endl;
    return 0;
}
