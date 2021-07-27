#include <bits/stdc++.h>
using namespace std;
int main(){
    long double  a,b,c;
    cin>>a>>b>>c;
    long double ans=c-a-b;
    long double ans2=2*sqrt(a*b);
    if(ans2<ans){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
