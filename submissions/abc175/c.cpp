#include <bits/stdc++.h>
using namespace std;
int main(){
    long long x,k,d,ans,i;
    cin>>x>>k>>d;
    x=abs(x);
    d=abs(d);
    if(x/d<k){
        i=k-x/d;
        if(i%2==0){
            ans=x%d;
        }
        else{
            ans=abs(x%d-d);
        }
    }
    else{
        ans=x-d*k;
    }
    cout<<ans<<endl;
    return 0;
}

