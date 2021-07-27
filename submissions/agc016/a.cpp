#include <bits/stdc++.h>
#define f(i,j,k)  for(int i=j;i<k;i++)
#define ll long long 
using namespace std;
int main(){
    string s;
    cin>>s;
    ll ans=s.size();
    f(i,0,26){
        ll n=0,m=0;
        f(j,0,s.size()){
            if(s[j]=='a'+i){
                m=max(n,m);
                n=0;
            }
            else{
                n++;
            }
        }
        m=max(n,m);
        ans=min(ans,m);
    }
    cout<<ans<<endl;
    return 0;
}
