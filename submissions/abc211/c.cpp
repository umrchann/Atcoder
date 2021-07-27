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
void re(ll a){
    if(a<206){
        cout<<"Yay!"<<endl;
    }
    else if(a==206){
        cout<<"so-so"<<endl;
    }
    else{
        cout<<":("<<endl;
    }
}
typedef pair<int, int> P;  // first: 最短距離, second: 頂点番号
int main(){
    string s,t,u;
    ll a,b,c,d,e,n,m,k,ans=0,ans2=0;
    ld x,y,z;
    char now[8]={'c' , 'h' , 'o' , 'k' , 'u' , 'd' , 'a' , 'i'};
    cin>>s;
    ll count[8][s.size()];
    if(s[0]==now[0]){
        count[0][0]=1;
    }
    else{
        count[0][0]=0;
    }
    f(i,1,s.size()){
        if(s[i]==now[0]){
            count[0][i]=count[0][i-1]+1;
        }
        else{
            count[0][i]=count[0][i-1];
        }
    }
    f(i,1,8){
        count[i][0]=0;
        f(j,1,s.size()){
            if(s[j]==now[i]){
                count[i][j]=(count[i][j-1]+count[i-1][j-1])%mod;
            }
            else{
                count[i][j]=count[i][j-1]%mod;
            }
        }
    }
    cout<<count[7][s.size()-1]<<endl;
    return 0;
}
