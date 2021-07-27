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
    ll n,a,b,c,d;
    string s;
    cin>>s;
    n=s.size();
    reverse(s.begin(),s.end());
    f(i,0,n){
        if(s[0]=='0'){
            s.erase(s.begin());
        }
        else{
            break;
        }
    }
    string ans=s;
    reverse(s.begin(),s.end());
    if(s==ans){
        answer(0);
    }
    else{
        answer(1);
    }
    return 0;
}
