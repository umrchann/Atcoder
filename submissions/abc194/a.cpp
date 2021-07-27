#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;

int main(){
    ll a,b,c;
    cin>>a>>b;
    c=a+b;
    if(c>=15&&b>=8){
        cout<<1<<endl;
    }
    else if(c>=10&&b>=3){
        cout<<2<<endl;
    }
    else if(c>=3){
        cout<<3<<endl;
    }
    else{
        cout<<4<<endl;
    }
    return 0;
}
