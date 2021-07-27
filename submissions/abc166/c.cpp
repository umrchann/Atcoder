#include <bits/stdc++.h>
#define f(i,j,k) for(int i=j;i<k;i++)
using namespace std;
int main(){
    long long n,m,ans=0;
    cin>>n>>m;
    long long h[n+1],a,b;
    vector <long long> j(n+1,0);
    f(i,1,n+1){
        cin>>h[i];
    }
    f(i,0,m){
        cin>>a>>b;
        if(h[a]>h[b]){
            j[b]=1;
        }
        else if(h[a]<h[b]){
            j[a]=1;
        }
        else{
            j[a]=j[b]=1;
        }
    }
    f(i,1,n+1){
        if(j[i]==0){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
