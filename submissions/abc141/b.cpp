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
    ld x,y,z;
    cin>>s;
    char o[3]={'R','U','D'};
    char p[3]={'L','U','D'};
    a=0;
    f(i,0,s.size()){
        b=0;
        if(i%2==0){
            f(j,0,3){
                if(o[j]==s[i]){
                    b++;
                    break;
                }
            }
            if(b==0){
                yn2(1);
                return 0;
            }
        }
        else if(i%2==1){
            f(j,0,3){
                if(p[j]==s[i]){
                    b++;
                    break;
                }
            }
            if(b==0){
                yn2(1);
                return 0;
            }
        }
    }
    yn2(0);
    return 0;
}
