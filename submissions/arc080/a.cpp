#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
int main(){
    ll n;
    cin>>n;
    ll a[n],m2=0,m4=0,m=0;
    f(i,0,n){
        cin>>a[i];
        if(a[i]%4==0){
            m4++;
        }
        else if(a[i]%2==0){
            m2++;
        }
        else{
            m++;
        }
    }
    if(m4>=m){
        cout<<"Yes"<<endl;
    }
    else if(m2==0&&m-m4<=1){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
