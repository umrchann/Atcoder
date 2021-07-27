#include <bits/stdc++.h>
#define f(i,j,k) for(int i=j;i<k;i++)
using namespace std;
int main(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    while(1){
        c-=b;
        if(c<=0){
            cout<<"Yes"<<endl;
            break;
        }
        a-=d;
        if(a<=0){
            cout<<"No"<<endl;
            break;
        }
    }    
    return 0;
}
