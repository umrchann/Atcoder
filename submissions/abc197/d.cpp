#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
void chmin(int& a, int b){ if(a > b) a = b; }
void chmax(int& a, int b){ if(a < b) a = b; }

int main(){
    long double n,nn,x0,y0,x,y,l,r;
    cin>>n;
    nn=n/2;
    cin>>x0>>y0;
    cin>>x>>y;
    auto i0=complex<long double> (x0,y0);
    auto i=complex<long double> (x-x0,y-y0);
    long double the=M_PI/2-M_PI/n;
    l=sqrt(pow(x-x0,2)+pow(y-y0,2));
    auto ans=i*complex<long double> (cos(-the)*cos(the),sin(-the)*cos(the))+i0;
    cout<<ans.real()<<" "<<ans.imag()<<endl;
    return 0;
}
