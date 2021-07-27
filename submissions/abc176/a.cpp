#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,x,t;
    cin>>n>>x>>t;
    long long ans=n/x;
    if(n%x==0){
        cout<<ans*t<<endl;
    }
    else{
        cout<<(ans+1)*t<<endl;
    }
    return 0;
}
