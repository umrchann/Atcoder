#include <bits/stdc++.h>
#define f(i,j,k) for(int i=j;i<k;i++)
#define f2(i,j,k) for(int i=j;i>k;i--)
using namespace std;
int main(){
    long long n,a,b;
    cin>>n>>a>>b;
    if(a>b){
        cout<<0<<endl;
    }
    else{
        if(n==1){
            if(a==b){
                cout<<1<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
        else{
            cout<<(b-a)*(n-2)+1<<endl;
        }
    }
    return 0;
}
