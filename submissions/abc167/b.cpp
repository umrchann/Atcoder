#include <bits/stdc++.h>
using namespace std;
#define f(i,j,k) for(int i=j;i<k;i++)
#define f2(i,j,k) for(int i=j;i>=k;i--)
int main(){
    long long a,b,c,k;
    cin>>a>>b>>c>>k;
    if(a>=k){
        cout<<k<<endl;
    }
    else if(a+b>=k){
        cout<<a<<endl;
    }
    else{
        cout<<2*a+b-k<<endl;
    }
    return 0;
}
