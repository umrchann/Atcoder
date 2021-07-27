#include <bits/stdc++.h>
#define f(i,j,k) for(int i=j;i<k;i++)
using namespace std;
int main(){
    long long a,b,c,ans=0,j;
    cin>>a>>b>>c;
    j=c/b;
    if(b==1){
        cout<<0<<endl;
        return 0;
    }
    f(i,1,j+1){
        if(ans<floor(a*(b*i-1)/b)-a*floor((b*i-1)/b)){
            ans=floor(a*(b*i-1)/b)-a*floor((b*i-1)/b);
        }
        if(ans==a-1-a/b){
            cout<<a-1-a/b<<endl;
            return 0;
        }
    }
    if(ans<floor(a*c/b)-a*floor(c/b)){
        ans=floor(a*c/b)-a*floor(c/b);
    }
    cout<<ans<<endl;
    return 0;
}
