#include <bits/stdc++.h>
#define f(i,j,k)  for(int i=j;i<k;i++)
#define ll long long 
#define ld long double
using namespace std;
int main(){
    ll n,sum=0;
    cin>>n;
    ll a[n],b[n];
    f(i,0,n){
        cin>>a[i]>>b[i];
    }
    for(int i=n-1;i>=0;i--){
        if((a[i]+sum)%b[i]==0){
            continue;
        }
        sum+=b[i]-(a[i]+sum)%b[i];
    }
    cout<<sum<<endl;
    return 0;
}
