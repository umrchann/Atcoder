#include <bits/stdc++.h>
#define f(i,j,k)  for(int i=j;i<k;i++)
#define ll long long 
using namespace std;
int main(){
    string s;
    cin>>s;
    ll ans=0;
    f(i,0,s.size()){
        if(s[i]=='U'){
            ans+=(s.size()-i-1)+2*i;
        }
        else{
            ans+=2*(s.size()-i-1)+i;
        }
    }
    cout<<ans<<endl;
    return 0;
}
