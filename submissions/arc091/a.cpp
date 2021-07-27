#include <bits/stdc++.h>
#define f(i,j,k) for(int i=j;i<k;i++)
#define f2(i,j,k) for(int i=j;i>k;i--)
using namespace std;
int main(){
    long long n,m;
    cin>>n>>m;
    if(n==1&&m==1){
        cout<<1<<endl;
    }
    else if(n==1||m==1){
        cout<<n*m-2<<endl;
    }
    else{
        cout<<(n-2)*(m-2)<<endl;
    }
    return 0;
}
