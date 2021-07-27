#include <bits/stdc++.h>
#define f(i,j,k)  for(int i=j;i<k;i++)
#define ll long long 
#define ld long double
using namespace std;
int main(){
    ll x,y,now=2000000000;
    cin>>x>>y;
    ll ans[4]={x,x,-x,-x};
    ll d[4]={1,0,2,1};
    f(i,0,4){
        ans[i]+=abs(abs(y)-abs(x));
        if(i%2==0){
            ans[i]*=-1;
        }
        if(ans[i]==y){
            now=min(now,d[i]+abs(abs(y)-abs(x)));
        }
    }
    cout<<now<<endl;
    return 0;
}
