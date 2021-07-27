#include <bits/stdc++.h>
using namespace std;
#define f(i,j,k) for(int i=j;i<k;i++)
int main(){
    long long n,k,sum=0,j;
    cin>>n;
    cin>>k;
    f(i,0,n){
        cin>>j;
        sum+=min(j*2,(k-j)*2);
    }
    cout<<sum<<endl;
    return 0;
}
