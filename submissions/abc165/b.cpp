#include <bits/stdc++.h>
#define f(i,j,k) for(int i=j;i<k;i++)
using namespace std;
int main(){
    long long n,ans=0,k=100;
    cin>>n;
    while(1){
        if(k>=n){
            break;
        }
        k*=1.01;
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}
