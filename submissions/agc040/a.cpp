#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
int main(){
    string s;
    cin>>s;
    ll n=s.size()+1,sum=0;
    vector<ll> num(n,0);
    f(i,0,n){
        if(s[i]=='<'){
            num[i+1]=max(num[i+1],num[i]+1);
        }
    }
    f2(i,n-2,0){
        if(s[i]=='>'){
            num[i]=max(num[i],num[i+1]+1);
        }
    }
    f(i,0,n){
        sum+=num[i];
    }
    cout<<sum<<endl;
    return 0;
}
