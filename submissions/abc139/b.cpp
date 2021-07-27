#include <bits/stdc++.h>
#define f(i,j,k) for(int i=j;i<k;i++)
using namespace std;
int main(){
    long long a,b,ans=1;
    cin>>a>>b;
    a-=1;
    b-=1;
    if(b==0){
        cout<<0<<endl;
    }
    else{
        while(1){
            if(a*ans>=b){
                break;
            }
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
