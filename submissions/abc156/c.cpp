#include <bits/stdc++.h>
#define f(i,j,k) for(int i=j;i<k;i++)
using namespace std;
int main(){
    long long n,sum,ans;
    cin>>n;
    long long a[n];
    f(i,0,n){
        cin>>a[i];
    }
    f(i,1,101){
        sum=0;
        f(j,0,n){
            sum+=(a[j]-i)*(a[j]-i);
        }
        if(i==1){
            ans=sum;
        }
        else{
            if(ans>sum){
                ans=sum;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
