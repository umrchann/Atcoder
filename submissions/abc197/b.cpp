#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
void chmin(int& a, int b){ if(a > b) a = b; }
void chmax(int& a, int b){ if(a < b) a = b; }

int main(){
    ll h,w,x,y;
    cin>>h>>w>>x>>y;
    char s[h][w];
    f(i,0,h){
        f(j,0,w){
            cin>>s[i][j];
        }
    }
    ll ans=0;
    f2(i,y-2,0){
        if(s[x-1][i]=='.'){
            ans++;
        }
        else{
            break;
        }
    }
    f(i,y,w){
        if(s[x-1][i]=='.'){
            ans++;
        }
        else{
            break;
        }
    }
    f2(i,x-2,0){
        if(s[i][y-1]=='.'){
            ans++;
        }
        else{
            break;
        }
    }
    f(i,x,h){
        if(s[i][y-1]=='.'){
            ans++;
        }
        else{
            break;
        }
    }
    cout<<ans+1<<endl;
    return 0;
}
