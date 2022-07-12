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
void chmin(int& a, int b){ if(a > b) a = b; }
void chmax(int& a, int b){ if(a < b) a = b; }
using Graph = vector<vector<ll>>; 
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
    ll n,q;
    cin>>n>>q;
    ll a[n+1],b[n+1],x[q];
    f(i,1,n+1){
        a[i]=i;
        b[i]=i;
    }
    f(i,0,q){
        cin>>x[i];
    }
    f(i,0,q){
        ll pos1,pos2;
        pos1=pos2=b[x[i]];
        if(pos1!=n){
            pos2++;
        }
        else{
            pos2--;
        }
        ll now1=a[pos1],now2=a[pos2];
        swap(a[pos1],a[pos2]);
        swap(b[now1],b[now2]);
    }
    f(i,1,n+1){
        if(i!=1){
            cout<<" ";
        }
        cout<<a[i];
    }
    cout<<endl;
    return 0;
}
