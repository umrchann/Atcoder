#include <bits/stdc++.h>
#define f(i,j,k) for(int i=j;i<k;i++)
using namespace std;
int main(){
    long long ans=0,ans2=0;
    string s,t,d;
    cin>>s>>t;
    f(i,0,s.size()-t.size()+1){
        d=s.substr(i,t.size());
        ans2=0;
        f(j,0,t.size()){
            if(t[j]==d[j]){
                ans2++;
            }
        }
        ans=max(ans,ans2);
    }
    cout<<t.size()-ans<<endl;
    return 0;
}
