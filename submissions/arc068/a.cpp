#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long
using namespace std;
int main(){
    ll x;
    cin>>x;
    ll ans=(x/11)*2;
    if(x%11<=6&&x%11>0){
        ans+=1;
    }
    else if(x%11>6){
        ans+=2;
    }
    cout<<ans<<endl;
    return 0;
}
