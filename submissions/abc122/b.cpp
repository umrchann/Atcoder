#include <bits/stdc++.h>
using namespace std;
#define f(i,j,k) for(int i=j;i<k;i++)
#define f2(i,j,k) for(int i=j;i>=k;i--)
int main(){
    long long ans=0,d=0;
    string s;
    cin>>s;
    f(i,0,s.size()){
        if(s[i]=='A'||s[i]=='C'||s[i]=='G'||s[i]=='T'){
            d++;
        }
        else{
            if(ans<d){
                ans=d;
            }
            d=0;
        }
    }
    if(ans<d){
        ans=d;
    }
    cout<<ans<<endl;
    return 0;
}
