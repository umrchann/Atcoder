#include <bits/stdc++.h>
#define f(i,j,k)  for(int i=j;i<k;i++)
#define ll long long 
#define ld long double
using namespace std;
int main(){
    ll h,w,sum=0;
    cin>>h>>w;
    char a; 
    f(i,0,h){
        f(j,0,w){
            cin>>a;
            if(a=='#'){
                sum++;
            }
        }
    }
    if(sum==h+w-1){
        cout<<"Possible"<<endl;
    }
    else{
        cout<<"Impossible"<<endl;
    }
    return 0;
}
