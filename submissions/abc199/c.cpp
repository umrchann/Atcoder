#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
const long long mod2=998244353;
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
    ll n,q;
    string s;
    char now;
    cin>>n;
    cin>>s;
    cin>>q;
    string ss[2];
    ss[0]=s.substr(0,n);
    ss[1]=s.substr(n,n);
    ll t,a,b,i=0,j=1;
    f(k,0,q){
        cin>>t>>a>>b;
        if(t==1){
            if(b<=n){
                now=ss[i][a-1];
                ss[i][a-1]=ss[i][b-1];
                ss[i][b-1]=now;
            }
            else if(a>n){
                now=ss[j][a-1-n];
                ss[j][a-1-n]=ss[j][b-1-n];
                ss[j][b-1-n]=now;
            }
            else{
                now=ss[i][a-1];
                ss[i][a-1]=ss[j][b-1-n];
                ss[j][b-1-n]=now;
            }
        }
        else{
            i=(i+1)%2;
            j=(j+1)%2;
        }
    }
    cout<<ss[i]+ss[j]<<endl;
    return 0;
}
