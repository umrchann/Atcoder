#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
const ll infl = 1LL << 60;
template<typename T> using min_priority_queue = priority_queue<T, vector<T>, greater<T>>;
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }
int main(){
    ll x;
    cin>>x;
    ll now=1;
    while(1){
        ll ans=x/pow(10,now);
        if(ans==0){
            break;
        }
        now++;
    }
    ll ans;
    if(now%2==1){
        now-=1;
        ans=pow(10,now/2)-1;
        cout<<ans<<endl;
    }
    else{
        ll j=pow(10,now/2);
        ll a=x/j,b=x%j;
        if(a<=b){
            ans=a;
        }
        else{
            ans=a-1;
        }
        cout<<ans<<endl;
    }
    return 0;
}
