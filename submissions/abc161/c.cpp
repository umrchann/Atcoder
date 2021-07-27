#include <bits/stdc++.h>
#define f(i,j,k) for(int i=j;i<k;i++)
using namespace std;
int main(){
    long long a,b;
    cin>>a>>b;
    if(a>b){
        a=a%b;
    }
    cout<<min(a,b-a)<<endl;;
    return 0;
}
