#include <bits/stdc++.h>
using namespace std;
#define f(i,j,k)=for(int i=j;i<=k;i++)  
#define f2(i,j,k)=for(int i=j;i>=k;i--)  
int main(){
    long long a,b,c,k;
    cin>>a>>b>>c;
    cin>>k;
    long long ans=0;
    while(a>=b){
        b*=2;
        ans++;
    }
    while(b>=c){
        c*=2;
        ans++;
    }
    if(ans<=k){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
