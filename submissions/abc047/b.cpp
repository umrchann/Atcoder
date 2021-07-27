#include <bits/stdc++.h>
#define f(i,j,k)  for(int i=j;i<k;i++)
#define ll long long 
#define ld long double
using namespace std;
int main(){
    ll w,h,n;
    cin>>w>>h>>n;
    ll x,y,a;
    vector<ll> xl,xr,ys,yu;
    xl.push_back(0);
    xr.push_back(w);
    ys.push_back(0);
    yu.push_back(h);
    f(i,0,n){
        cin>>x>>y>>a;
        if(a==1){
            xl.push_back(x);
        }
        else if(a==2){
            xr.push_back(x);
        }
        else if(a==3){
            ys.push_back(y);
        }
        else if(a==4){
            yu.push_back(y);
        }
    }
    sort(xl.begin(),xl.end());
    sort(xr.begin(),xr.end());
    sort(ys.begin(),ys.end());
    sort(yu.begin(),yu.end());
    x=xr[0]-xl[xl.size()-1];
    y=yu[0]-ys[ys.size()-1];
    if(x<0){
        x=0;
    }
    if(y<0){
        y=0;
    }
    cout<<x*y<<endl;
    return 0;
}
