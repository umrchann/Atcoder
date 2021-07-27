#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long
using namespace std;
int main(){
    ll n,q,l,r;
    cin>>n>>q;
    string s;
    cin>>s;
    ll b[n+1];
    b[0]=0;
    b[1]=0;
    f(i,2,n+1){
        if(s[i-2]=='A'&&s[i-1]=='C'){
            b[i]=b[i-1]+1;
        }
        else{
            b[i]=b[i-1];
        }
    }
    f(i,0,q){
        cin>>l>>r;
        cout<<b[r]-b[l]<<endl;
    }
    return 0; 
}
