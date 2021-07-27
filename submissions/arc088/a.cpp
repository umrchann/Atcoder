#include <bits/stdc++.h>
#define f(i,j,k) for(int i=j;i<k;i++)
#define f2(i,j,k) for(int i=j;i>k;i--)
using namespace std;
int main(){
    long long x,y,ans=0;
    cin>>x>>y;
    while(x<=y){
        x*=2;
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}
