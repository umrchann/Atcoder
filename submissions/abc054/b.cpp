#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
int main(){
    ll n,m;
    cin>>n>>m;
    string a[n],b[m];
    f(i,0,n){
        cin>>a[i];
    }
    f(i,0,m){
        cin>>b[i];
    }
    f(i,0,n-m+1){
        f(j,0,n-m+1){
            bool now=true;
            f(k,j,m+j){
                if(b[k-j]!=a[k].substr(i, m)){
                    now=false;
                }
            }
            if(now){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;
    return 0;
}
