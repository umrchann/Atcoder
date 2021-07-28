#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
#define ld long double 
using namespace std;
using Graph = vector<vector<ll>>;
const long long mod=1e9+7;
const long long mod2=998244353;
const long long INF = (1 << 29);
void yn2(ll a){
    if(a==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
void yn(bool a){
    puts(a?"Yes":"No");
}
void YN(bool a){
    puts(a?"YES":"NO");
}
int main(){
    string s;
    ll n,m,k;
    ld x,y,z;
    cin>>n;
    ll ans=n;
    f(i,1,n+1){
        ll now=i,j=0;
        while(now>0){
            if(now%10==7){
                ans--;
                j++;
                break;
            }
            else{
                now/=10;
            }
        }
        if(j==0){
            now=i;
            while(now>0){
                if(now%8==7){
                    ans--;
                    break;
                }
                else{
                    now/=8;
                 }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
