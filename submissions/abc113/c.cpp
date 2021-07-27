#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=998244353;
void chmin(int& a, int b){ if(a > b) a = b; }
void chmax(int& a, int b){ if(a < b) a = b; }
int main(){
    ll n,m;
    cin>>n>>m;
    ll p[m],y[m];
    vector <int> a[n+1];
    f(i,0,m){
        cin>>p[i]>>y[i];
        a[p[i]].push_back(y[i]);
    }
    f(i,1,n+1){
        sort(a[i].begin(),a[i].end());
    }
    f(i,0,m){
       printf("%06d%06d\n",p[i],lower_bound(a[p[i]].begin(),a[p[i]].end(),y[i])-a[p[i]].begin()+1 );
    }
    return 0;
}
