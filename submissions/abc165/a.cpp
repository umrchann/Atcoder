#include <bits/stdc++.h>
#define f(i,j,k) for(int i=j;i<k;i++)
using namespace std;
int main(){
    long long a,b,k;
    cin>>k;
    cin>>a>>b;
    f(i,a,b+1){
        if(i%k==0){
            cout<<"OK"<<endl;
            return 0;
        }
    }
    cout<<"NG"<<endl;
    return 0;
}
