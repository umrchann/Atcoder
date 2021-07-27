#include <bits/stdc++.h>
using namespace std;
#define f(i,j,k) for(int i=j;i<k;i++)
#define f2(i,j,k) for(int i=j;i>=k;i--)
int main(){
    long long n,ans=0;
    cin>>n;
    long long nn=sqrt(n);
    for(long long i=2;i<=nn;i++){
    long long j=0,top=1;
    while(n%i==0){
                n/=i;
                j++;
                if(j>=top){
                    j=0;
                    top++;
                    ans++;
                }
            }
        }
        if(n!=1){
            ans++;
        }
        cout<<ans<<endl;
    
    return 0;
}
