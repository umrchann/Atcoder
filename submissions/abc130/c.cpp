#include <bits/stdc++.h>
#define f(i,j,k)  for(int i=j;i<k;i++)
#define ll long long 
using namespace std;
int main(){
    long double w,h,x,y;
    cin>>w>>h>>x>>y;
    cout<<fixed<<setprecision(10)<<w*h/2<<" ";
    if(w/2==x&&h/2==y){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }
    return 0;
}
