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
    string s;
    cin>>s;
    ll k,ans=0,nown=1;
    cin>>k;
    char now=s[0];
    f(i,1,s.size()){
        if(now==s[i]){
            nown++;
        }
        else{
            ans+=nown/2;
            nown=1;
            now=s[i];
        }
    }
    if(nown==s.size()){
        cout<<nown*k/2<<endl;
        return 0;
    }
    ans+=nown/2;
    ans*=k;
    if(s[0]==s[s.size()-1]){
        ll a=1,b=1;
        f(i,1,s.size()){
            if(s[i]==s[0]){
                a++;
            }
            else{
                break;
            }
        }
        f2(i,s.size()-2,0){
            if(s[i]==s[0]){
                b++;
            }
            else{
                break;
            }
        }
        ans-=(k-1)*(a/2+b/2-(a+b)/2);
    }
    cout<<ans<<endl;
    return 0;
}
