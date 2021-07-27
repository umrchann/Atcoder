#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
char q(char x,char y){
    if(x=='R'){
        if(y=='P'){
            return y;
        }
        else{
            return x;
        }
    }
    if(x=='P'){
        if(y=='S'){
            return y;
        }
        else{
            return x;
        }
    }
    if(x=='S'){
        if(y=='R'){
            return y;
        }
        else{
            return x;
        }
    }
}
int main(){
    ll n,k;
    string s;
    cin>>n>>k;
    cin>>s;
    while(k--){
        string t=s+s;
        f(i,0,n){
            s[i]=q(t[i*2],t[i*2+1]);
        }
    }
    cout<<s[0]<<endl;
    return 0;
}
