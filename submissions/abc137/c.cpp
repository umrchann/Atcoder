#include <bits/stdc++.h>
#define f(i,j,k)  for(int i=j;i<k;i++)
#define ll long long 
#define ld long double
using namespace std;
int main(){
    ll n;
    cin>>n;
    vector <string> s(n);
    f(i,0,n){
        cin>>s[i];
        sort(s[i].begin(),s[i].end());
    }
    sort(s.begin(),s.end());
    ll ans=0,now=1;
    f(i,0,n-1){
        if(s[i]==s[i+1]){
            ans+=now;
            now++;
        }
        else{
            now=1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
