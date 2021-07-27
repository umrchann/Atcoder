#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i*i<=k;i++)
using namespace std;
int main(){
    long long n;
    int ans=2;
    vector <long long> a;
    cin>>n;
    if(n==2){
        cout<<1<<endl;
        return 0;
    }
    f(i,2,n){
        if(n%i==0){
            a.push_back(i);
        }
    }
    f(i,2,n-1){
        if(i*i==(n-1)){
            ans++;
        }
        else if((n-1)%i==0){
            ans+=2;
        }
    }
    for(int i=0;i<a.size();i++){
        long long nn=n;
        while(nn%a[i]==0){
            nn=nn/a[i];
        }
        if(nn%a[i]==1){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
