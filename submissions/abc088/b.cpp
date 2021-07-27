#include <bits/stdc++.h>
#define f(i,j,k) for(int i=j;i<k;i++)
using namespace std;
int main(){
    long long n,sum=0;
    cin>>n;
    long long a[n];
    f(i,0,n){
        cin>>a[i];
    }
    sort(a,a+n);
    reverse(a,a+n);
    f(i,0,n){
        if(i%2==0){
            sum+=a[i];
        }
        else{
            sum-=a[i];
        }
    }
    cout<<sum<<endl;
    return 0;
}
