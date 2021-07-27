#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
const long long mod2=998244353;
void chmin(int& a, int b){ if(a > b) a = b; }
void chmax(int& a, int b){ if(a < b) a = b; }
ll a[1 << 18],n,l,k;
void answer(ll a){
    if(a==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
bool solve(ll M) {
    ll cnt = 0, pre = 0;
    f(i,0,n){
        if (a[i] - pre >= M && l - a[i] >= M) {
            cnt += 1;
            pre = a[i];
        }
    }
    if (cnt >= k) return true;
    return false;
}
int main(){
    cin>>n>>l;
    cin>>k;
    f(i,0,n){
        cin>>a[i];
    }
    ll left=-1,right=l+1;
    while(right-left>1){
        ll mid=left+(right-left)/2;
        if(solve(mid)){
            left=mid;
        }
        else{
            right=mid;
        }
    }
    cout<<left<<endl;
    return 0;
}
