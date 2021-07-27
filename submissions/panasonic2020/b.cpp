#include <bits/stdc++.h>
using namespace std;
#define f(i,j,k) for(int i=j;i<k;i++)
int main(){
    long long h,w;
    cin>>h>>w;
    if(h==1||w==1){
        cout<<1<<endl;
    }
    else if(h%2==1&&w%2==1){
        cout<<(h*w+1)/2<<endl;
    }
    else{
        cout<<h*w/2<<endl;
    }
    return 0;
}
