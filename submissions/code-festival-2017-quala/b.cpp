#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
int main(){
    ll n,m,k;
    cin>>n>>m;
    cin>>k;
    f(i,0,n+1){
        f(j,0,m+1){
            if(i*m+j*n-2*i*j==k){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;
    return 0;
}
