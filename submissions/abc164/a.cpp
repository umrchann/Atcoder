#include <bits/stdc++.h>
#define f(i,j,k) for(int i=j;i<k;i++)
using namespace std;
int main(){
    long long n,m;
    cin>>n>>m;
    if(n<=m){
        cout<<"unsafe"<<endl;
    }
    else{
        cout<<"safe"<<endl;
    }
    return 0;
}
