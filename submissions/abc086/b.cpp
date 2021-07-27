#include <bits/stdc++.h>
using namespace std;
#define f(i,j,k) for(int i=j;i<k;i++)
int main(){
    string a,b,ans;
    cin>>a>>b;
    ans=a+b;
    long long aa=stoll(ans);
    long long j=sqrt(aa);
    if(aa==j*j){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
