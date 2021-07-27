#include <bits/stdc++.h>
#define f(i,j,k) for(int i=j;i<k;i++)
using namespace std;
int main(){
    long long n,m,a;
    cin>>n>>m;
    f(i,0,m){
        cin>>a;
        n-=a;
    }
    if(n<0){
        cout<<-1<<endl;
    }
    else{
        cout<<n<<endl;
    }
    return 0;
}
