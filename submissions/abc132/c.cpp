#include <bits/stdc++.h>
using namespace std;
#define f(i,j,k) for(int i=j;i<k;i++)
int main(){
    long long n;
    cin>>n;
    long long nn=n/2;
    long long a[n];
    f(i,0,n){
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<a[nn]-a[nn-1]<<endl;
    return 0;
}
