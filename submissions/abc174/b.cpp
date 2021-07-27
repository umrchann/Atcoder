#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,ans=0;
    long double d,x,y,l;
    cin>>n>>d;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        l=sqrt(x*x+y*y);
        if(l<=d){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
