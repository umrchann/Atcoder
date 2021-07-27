#include <bits/stdc++.h>
#define f(i,j,k) for(int i=j;i<k;i++)
using namespace std;
int gcd(long long s,long long t){
    if(s%t==0){
        return t;
    }
    else{
        return gcd(t,s%t);
    }
}
int main(){
    long long n,f=0,ans=0;
    cin>>n;
    long long h[n];
    f(i,0,n){
        cin>>h[i];
    }
    f(i,0,n){
        if(f<h[i]){
            ans+=h[i]-f;
        }
        f=h[i];
    }
    cout<<ans<<endl;
    return 0;
}
