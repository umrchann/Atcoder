#include <bits/stdc++.h>
#define f(i,j,k) for(int i=j;i<k;i++)
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    long long a[n];
    f(i,0,n){
        cin>>a[i];
    }
    cout<<(n+k-3)/(k-1)<<endl;
    return 0;
}
