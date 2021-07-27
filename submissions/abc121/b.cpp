#include <bits/stdc++.h>
using namespace std;
#define f(i,j,k) for(int i=j;i<k;i++)
int main(){
    long long n,m,c,ans=0,sum,a;
    cin>>n>>m>>c;
    long long b[m];
    f(i,0,m){
        cin>>b[i];
    }
    f(i,0,n){
        sum=c;
        f(j,0,m){
            cin>>a;
            sum+=a*b[j];
        }
        if(sum>0){
            ans++;
        }
    }
    cout<<ans<<endl;
}
