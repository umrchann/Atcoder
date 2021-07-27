#include <bits/stdc++.h>
#define f(i,j,k) for(int i=j;i<k;i++)
using namespace std;
int main(){
    long long n,ans=0;
    cin>>n;
    string s;
    map <string,long long> dict;
    f(i,0,n){
        cin>>s;
        dict[s]++;
        if(dict[s]==1){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
