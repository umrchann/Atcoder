#include <bits/stdc++.h>
#define f(i,j,k)  for(int i=j;i<k;i++)
#define ll long long 
#define ld long double
using namespace std;
int main(){
    ll n,a,b,c,d,ans=1;
    string s;
    cin>>n>>a>>b>>c>>d;
    cin>>s;
    f(i,a+1,c-1){
        if(s[i]=='#'&&s[i-1]=='#'){
            ans=0;
            break;
        }
    }
    f(i,b+1,d-1){
        if(s[i]=='#'&&s[i-1]=='#'){
            ans=0;
            break;
        }
    }
    if(c>d){
        ans=0;
        f(i,b,d+1){
            if(s[i]=='.'&&s[i-1]=='.'&&s[i-2]=='.'){
                ans=1;
                break;
            }
        }
    }
    puts(ans?"Yes":"No");
    return 0;
}
