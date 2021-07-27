#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
void chmin(int& a, int b){ if(a > b) a = b; }
void chmax(int& a, int b){ if(a < b) a = b; }
void answer(ll a){
    if(a==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
int main(){
    ll t,n;
    cin>>t;
    f(i,0,t){
        cin>>n;
        if(n%4==0){
            cout<<"Even"<<endl;
        }
        else if(n%2==0){
            cout<<"Same"<<endl;
        }
        else{
            cout<<"Odd"<<endl;
        }
    }
    return 0;
}
