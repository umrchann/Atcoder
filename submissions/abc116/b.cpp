#include <bits/stdc++.h>
using namespace std;
#define f(i,j,k) for(int i=j;i<k;i++)
#define f2(i,j,k) for(int i=j;i>=k;i--)
long long q1(long long a){
    if(a%2==0){
        return a/2;
    }
    else{
        return 3*a+1;
    }
}
int main(){
    long long n,ans=1;
    cin>>n;
    vector <long long> a(1000001,0);
    a[n]++;
    while(1){
        n=q1(n);
        ans++;
        if(a[n]!=0){
            break;
        }
        else{
            a[n]++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
