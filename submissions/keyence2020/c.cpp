#include <bits/stdc++.h>
#define f(i,j,k)  for(int i=j;i<k;i++)
#define ll long long 
#define ld long double
using namespace std;
int main(){
    ll n,k,s;
    cin>>n>>k>>s;
    if(k==0){
        if(s<pow(10,9)){
            cout<<s+1;
            f(i,1,n){
                cout<<" "<<s+1;
            }
            cout<<endl;
        }
        else{
            cout<<1;
            f(i,1,n){
                cout<<" "<<1;
            }
            cout<<endl;
        }
    }
    else{
        if(s<pow(10,9)){
            cout<<s;
            f(i,1,k){
                cout<<" "<<s;
            }
            f(i,k,n){
                cout<<" "<<s+1;
            }
            cout<<endl;
        }
        else{
            cout<<s;
            f(i,1,k){
                cout<<" "<<s;
            }
            f(i,k,n){
                cout<<" "<<1;
            }
            cout<<endl;
        }
    }
    return 0;
}
