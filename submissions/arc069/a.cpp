#include <bits/stdc++.h>
#define f(i,j,k)  for(int i=j;i<k;i++)
#define ll long long 
using namespace std;
int main(){
    ll n,m;
    cin>>n>>m;
    if(n*2>m){
        cout<<m/2<<endl;
    }
    else{
        cout<<(m-n*2)/4+n<<endl;
    }
    return 0;
}
