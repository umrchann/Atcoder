#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
#define ld long double 
using namespace std;
const long long mod=1e9+7;
const long long mod2=998244353;
const long long INF = (1 << 29);
void chmin(int& a, int b){ if(a > b) a = b; }
void chmax(int& a, int b){ if(a < b) a = b; }
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
    string s,t="d",u="d";
    ll a,b,c,d,e,n,m,k,ans=0,ans2=0;
    ld x,y,z;
    cin>>s;
    f(i,0,s.size()){
        if(s[i]=='o'){
            ans++;
        }
        else if(s[i]=='?'){
            ans2++;
        }
    }
    
    if(ans>4||ans+ans2==0){
        cout<<0<<endl;
    }
    else{
        if(ans==0){
            a=pow(ans2,4);
        }
        else if(ans==1){
            a=pow(ans2+1,4)-pow(ans2,4);
        }
        else if(ans==2){
            a=pow(ans2+2,4)-2*pow(ans2+1,4)+pow(ans2,4);
        }
        else if(ans==3){
            a=ans2*24+36;
        }
        else{
            a=24;
        }
        cout<<a<<endl;
    }
    return 0;
}
