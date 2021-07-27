#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
#define ld long double 
using namespace std;
const long long mod=1e9+7;
const long long mod2=998244353;
const long long INF = (1 << 29);
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
    ll n;
    cin>>n;
    if(n%10==3){
        cout<<"bon"<<endl;
    }
    else if(n%10==0||n%10==1||n%10==6||n%10==8){
        cout<<"pon"<<endl;
    }
    else{
        cout<<"hon"<<endl;
    }
    return 0;
}
