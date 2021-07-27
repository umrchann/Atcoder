#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
const long long mod2=998244353;
const long long INF = (1 << 29);
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
    string s,t="";
    cin>>s;
    ll now=0;
    f(i,0,s.size()){
        if(s[i]=='R'){
            now++;
        }
        else if(s[i]!='R'&&now%2==0){
            if(t.back()==s[i]){
                t.pop_back();
            }
            else{
                t.push_back(s[i]);
            }
        }
        else if(s[i]!='R'){
            if(t[0]==s[i]){
                t.erase(t.begin());
            }
            else{
                t.insert(t.begin(),s[i]);
            }
        }
    }
    if(now%2!=0){
        reverse(t.begin(),t.end());
    }
    cout<<t<<endl;
    return 0;
}
