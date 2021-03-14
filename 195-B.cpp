#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
int main(){
    ll a,b,w;
    cin>>a>>b>>w;
    w*=1000;
    ll ansmax=w/a;
    ll ansmin=w/b;
    if(w%b!=0){
        ansmin++;
    }
    double j=w/ansmax,aa=a;
    if(ansmin>ansmax){
        cout<<"UNSATISFIABLE"<<endl;
    }
    else{
        cout<<ansmin<<" "<<ansmax<<endl;
    }
    return 0;
}
