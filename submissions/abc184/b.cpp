#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
int main(){
    ll n,x;
    cin>>n>>x;
    char c;
    f(i,0,n){
        cin>>c;
        if(c=='o'){
            x++;
        }
        else{
            if(x>0){
                x--;
            }
        }
    }
    cout<<x<<endl;
    return 0;
}
