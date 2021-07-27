#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
ll gcd(ll x,ll y){
    if(x%y==0){
        return y;
    }
    else{
        return gcd(y,x%y);
    }
}

ll lcm(ll x,ll y){
    return x*y/gcd(x,y);
}

int main(){
    ll n;
    cin >> n;
    vector<ll> l(n);
    f(i,0,n){
        cin>>l[i];
    }
    sort(l.begin(), l.end());
    ll ans = 0;
    f(i,0,n-2){
        f(j,i+1,n-1){
            f(k,j+1,n){
                if(l[i]+l[j]>l[k]){
                    ans++;
                }
                else{
                    break;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
