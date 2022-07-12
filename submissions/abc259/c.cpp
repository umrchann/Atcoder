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
    string s,t;
    cin>>s>>t;
    char now;
    ll cnt;
    vector<pair<char,ll>> S;
    vector<pair<char,ll>> T;
    now=s[0];
    cnt=1;
    f(i,1,s.size()){
        if(now!=s[i]){
            S.push_back(make_pair(now,cnt));
            now=s[i];
            cnt=1;
        }
        else{
            cnt++;
        }
    }
    S.push_back(make_pair(now,cnt));
    now=t[0];
    cnt=1;
    f(i,1,t.size()){
        if(now!=t[i]){
            T.push_back(make_pair(now,cnt));
            now=t[i];
            cnt=1;
        }
        else{
            cnt++;
            
        }
    }
    T.push_back(make_pair(now,cnt));
    bool ans=true;
    if(S.size()!=T.size()){
        ans=false;
    }
    else{
        f(i,0,S.size()){
            if(S[i].first!=T[i].first){
                ans=false;
                break;
            }
            else{
                if((S[i].second==T[i].second)||(S[i].second<T[i].second&&S[i].second>=2)){
                    continue;
                }
                else{
                    ans=false;
                    break;
                }
            }
        }
    }
    yn(ans);
    return 0;
}
