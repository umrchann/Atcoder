#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
int main(){
    ll n;
    cin>>n;
    ll a=1,b=1;
    for(ll i=3;i<=n;i*=3,a++){
        b=1;
        for(ll j=5;j<=n-i;j*=5,b++){
            if(i+j==n){
                cout<<a<<" "<<b<<endl;
                return 0;
            }
        }
    }
    cout<<-1<<endl;
    return 0;
}
