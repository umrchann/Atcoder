#include <bits/stdc++.h>
using namespace std;
#define f(i,j,k) for(int i=j;i<k;i++)
int main(){
    long long n,ans=1;
    cin>>n;
    while(1){
        ans*=2;
        if(ans>n){
            ans/=2;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
