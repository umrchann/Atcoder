#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long ans=pow(10,12);//答え
    for(long long i=1;i*i<=n;i++){
        if(n%i==0){
            ans=min(ans,i+n/i-2);
        }
    }
    cout<<ans<<endl;
    return 0;
}
