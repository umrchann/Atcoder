#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
const ll INF=numeric_limits<ll>::max() / 4;
void chmin(ll& a,ll b){
    if(a>b){
        a=b;
    }
}

void chmax(ll& a,ll b){
    if(a<b){
        a=b;
    }
}

int main(){
    ll n,q,a,t,x;
    cin>>n;
    ll low=-INF,high=INF,add=0;
    f(i,0,n){
        cin>>a>>t;
        if(t==1){
            low+=a;
            high+=a;
            add+=a;
        }
        else if(t==2){
            chmax(low,a);
            chmax(high,a);
        }
        else{
            chmin(low,a);
            chmin(high,a);
        }
    }
    cin>>q;
    f(i,0,q){
        cin>>x;
        cout<<min(high,max(low,x+add))<<endl;
    }
    
    
    return 0;
}
