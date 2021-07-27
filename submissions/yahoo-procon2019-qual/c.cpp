#include <bits/stdc++.h>
#define f(i,j,k)  for(int i=j;i<k;i++)
#define ll long long 
using namespace std;
int main(){
    ll k,a,b;
    cin>>k>>a>>b;
    if(a+1>=b||k<a+1){
        cout<<1+k<<endl;
    }
    else{
        if((k-a+1)%2==0){
            cout<<(k-a+1)/2*(b-a)+a<<endl;
        }
        else{
            cout<<(k-a)/2*(b-a)+a+1<<endl;
        }
    }
    return 0;
}
