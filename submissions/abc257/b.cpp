#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define fixed(i) fixed<<setprecision(i)
#define ll long long 
#define ld long double 
using namespace std;
const long long mod=1e9+7;
const long long mod2=998244353;
const long long INF = (1 << 29);
void yn(bool a){
    puts(a?"Yes":"No");
}
void YN(bool a){
    puts(a?"YES":"NO");
}
vector<ll> x={1,1,1,0,0,-1,-1,-1},y={1,0,-1,1,-1,1,0,-1};
int main(){
    ll n,k,q;
    cin>>n>>k>>q;
    ll a[k],l[q];
    vector<ll> now(n);
    f(i,0,k){
        cin>>a[i];
        a[i]--;
        now[a[i]]++;
    }
    f(i,0,q){
        cin>>l[i];
        l[i]--;
    }
    f(i,0,q){
        if(a[l[i]]==n-1){
            continue;
        }
        else{
            if(now[a[l[i]]+1]!=0){
                continue;
            }
            else{
                now[a[l[i]]]=0;
                a[l[i]]++;
                now[a[l[i]]]++;
            }
        }
    }
    f(i,0,k){
        if(i!=0){
            cout<<" ";
        }
        cout<<a[i]+1;
    }
    cout<<endl;
    return 0;
}
