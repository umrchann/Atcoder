#include <bits/stdc++.h>
#define f(i,j,k)  for(int i=j;i<k;i++)
#define ll long long 
#define ld long double
using namespace std;
int main(){
    ll n,c,k,con=0;
    cin>>n>>c>>k;
    ll a[n+1];
    f(i,0,n){
        cin>>a[i];
    }
    a[n] = 2000000100;
    sort(a,a+n+1);
    ll now=a[0],ans=0;
    f(i,0,n){
        con++;
        if(con==c||a[i+1]-now>k){
            ans++;
            now=a[i+1];
            con=0;
        }
    }
    cout<<ans<<endl;
    return 0;
}
