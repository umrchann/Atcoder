#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
int main(){
    long double sx,sy,gx,gy;
    cin>>sx>>sy>>gx>>gy;
    sy*=-1;
    long double k=(gy-sy)/(gx-sx);
    cout<<fixed<<setprecision(10)<<gx-gy/k<<endl;
    return 0;
}
