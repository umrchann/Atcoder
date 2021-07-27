#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
ll a,b,x;
ll key(ll left,ll right){
    ll mid=(right+left)/2;
    ll ms=to_string(mid).size();
    if(right-left<=1){
        return left;
    }
    if(a*mid+b*ms<=x){
        return key(mid,right);
    }
    else{
        return key(left,mid);
    }
}

int main(){
    cin>>a>>b>>x;
    if(a+b>x){
        cout<<0<<endl;
    }
    else{
        cout<<key(0,pow(10,9)+1)<<endl;
    }
    return 0;
}
