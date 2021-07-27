#include <bits/stdc++.h>
#define f(i,j,k)  for(int i=j;i<k;i++)
#define ll long long 
using namespace std;
int main(){
    ll l,r,ans=2018;
    cin>>l>>r;
    if(r-l>=2019){
        cout<<0<<endl;
    }
    else{
        f(i,l,r){
            f(j,i+1,r+1){
                if(ans>((i%2019)*(j%2019))%2019){
                    ans=((i%2019)*(j%2019))%2019;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
