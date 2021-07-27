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
    string s,t,u;
    ll a,b,c,d,e,n,k,ans=0;
    ld x,y,z,ans2=0;
    cin>>s;
    ll aa[4];
    f(i,0,4){
        aa[i]=s[i]-'0';
    }
    if(aa[0]*10+aa[1]==0||aa[0]*10+aa[1]>=13){
        if(aa[2]*10+aa[3]>=13||aa[2]*10+aa[3]==0){
            cout<<"NA"<<endl;
        }
        else{
            cout<<"YYMM"<<endl;
        }
    }
    else{
        if(aa[2]*10+aa[3]>=13||aa[2]*10+aa[3]==0){
            cout<<"MMYY"<<endl;
        }
        else{
            cout<<"AMBIGUOUS"<<endl;
        }
    }
    return 0;
}
