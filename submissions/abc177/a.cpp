#include <bits/stdc++.h>
#define f(i,j,k) for(int i=j;i<k;i++)
using namespace std;
int main(){
    long long d,t,s;
    cin>>d>>t>>s;
    if(d%s!=0){
        d=d/s+1;
    }
    else{
        d=d/s;
    }
    if(d<=t){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
