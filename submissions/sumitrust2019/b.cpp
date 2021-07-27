#include <bits/stdc++.h>
#define f(i,j,k) for(int i=j;i<k;i++)
using namespace std;
int main(){
    long long n;
    cin>>n;
    f(i,0,50001){
        if(int(i*1.08)==n){
            cout<<i<<endl;
            return 0;
        }
        else if(int(i*1.08)>n){
            break;
        }
    }
    cout<<":("<<endl;
    return 0;
}
