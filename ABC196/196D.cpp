#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
const ll infl = 1LL << 60;
ll H,W,A,B;
bool used[16][16];
ll dfs(ll x,ll y,ll a){
    ll ans=0;
    if(y==H){
        return a==0;
    }
    if(x==W){
        return dfs(0,y+1,a);
    }
    if(used[x][y]){
        return dfs(x+1,y,a);
    }
    if(y+1<H&&!used[x][y+1]&&a>0){
        used[x][y]=used[x][y+1]=true;
        ans+=dfs(x+1,y,a-1);
        used[x][y]=used[x][y+1]=false;
    }
    if(x+1<W&&!used[x+1][y]&&a>0){
        used[x][y]=used[x+1][y]=true;
        ans+=dfs(x+1,y,a-1);
        used[x][y]=used[x+1][y]=false;
    }
    ans+=dfs(x+1,y,a);
    return ans;
}
int main(){
    ll h,w,a,b;
    cin>>H>>W>>A>>B;
    cout<<dfs(0,0,A)<<endl;
    return 0;
}
