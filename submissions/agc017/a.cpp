#include <bits/stdc++.h>
#define f(i,j,k)  for(int i=j;i<k;i++)
#define ll long long 
using namespace std;
int main(){
    ll n,p;
    cin>>n>>p;
    ll a[n],ans=0,ans2=0;
    int64_t ans3;
    f(i,0,n){
        cin>>a[i];
        if(a[i]%2==0){
            ans++;
        }
        else{
            ans2++;
        }
    }
    
    if(ans2==0){
        if(p==1){
            cout<<0<<endl;
        }
        else{
            ans3=pow(2,ans);
            cout<<ans3<<endl;
        }
    }
    else{
        ans3=pow(2,ans+ans2-1);
        cout<<ans3<<endl;
    }
    return 0;
}
