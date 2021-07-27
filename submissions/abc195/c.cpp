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
    ll n,i=1,ans=0;
    cin>>n;
    while(1){
        ll now=n/pow(10,i*3);
        if(now==0){
            n-=pow(10,(i-1)*3);
            break;
        }
        else{
            ans+=(i-1)*(pow(10,i*3)-pow(10,(i-1)*3));
            i++;
            
        }
    }
    ans+=(i-1)*(n+1);
    cout<<ans<<endl;
    return 0;
}
