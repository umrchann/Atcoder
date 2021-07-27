#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long
using namespace std;
int main(){
    ll k,s,ans=0;
    cin>>k>>s;
    f(i,0,k+1){
        f(j,0,k+1){
            if(s-i-j>=0&&s-i-j<=k){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0; 
}
