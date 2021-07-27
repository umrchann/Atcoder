#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
void chmin(int& a, int b){ if(a > b) a = b; }
void chmax(int& a, int b){ if(a < b) a = b; }
void answer(ll a){
    if(a==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
int main(){
    ll n,x;
    cin>>n;
    map<ll,ll> a;
    f(i,0,n){
        cin>>x;
        a[x]++;
    }
    if(n%3==0&&a.size()==3){
        ll v=0,now=1;
        for(auto x:a){
            v^=x.first;
            now*=x.second;
        }
        if(now==pow(n/3,3)&&v==0){
            answer(0);
            return 0;
        }
    }
    else if(n%3==0&&a.size()==2){
        for(auto x:a){
            if(x.first!=0){
                if(a[x.first]==2*n/3&&a[0]==n/3){
                    answer(0);
                    return 0;
                }
            }
        }
    }
    else if(a.size()==1){
        if(a[0]==n){
            answer(0);
            return 0;
        }
    }
    answer(1);
    return 0;
}
