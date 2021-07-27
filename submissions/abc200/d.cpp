#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
#define ld long double 
using namespace std;
const long long mod=1e9+7;
const long long mod2=998244353;
const long long mod3=pow(10,18)+1;
const long long INF = (1 << 29);
void chmin(int& a, int b){ if(a > b) a = b; }
void chmax(int& a, int b){ if(a < b) a = b; }
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
    cin>>n;
    ll aa[n];
    vector<vector<ll>> cc(200);
    f(i,0,n){
        cin>>aa[i];
        aa[i]%=200;
        if(!cc.at(aa[i]).empty()){
            yn(true);
            cout<<cc.at(aa[i]).size();
            for (auto k:cc.at(aa[i])){
                cout<<" "<<k;
            }
            cout<<endl;
            cout<<1<<" "<<i+1<<endl;
            return 0;
        }
        vector<ll> bb(200,0);
        f(j,0,200){
            if(!cc.at(j).empty()&&cc.at((j+aa[i])%200).empty()&&cc.at(j).back()!=i+1){
                cc.at((j+aa[i])%200)=cc.at(j);
                cc.at((j+aa[i])%200).push_back(i+1);
            }
            else if(!cc.at(j).empty()&&!cc.at((j+aa[i])%200).empty()&&cc.at(j).back()!=i+1){
                yn(true);
                cout<<cc.at(j).size()+1;
                for (auto k:cc.at(j)){
                    cout<<" "<<k;
                }
                cout<<" "<<i+1<<endl;
                cout<<cc.at((j+aa[i])%200).size();
                for (auto k:cc.at((j+aa[i])%200)){
                    cout<<" "<<k;
                }
                cout<<endl;
                return 0;
            }
        }
        if(cc.at(aa[i]).empty()){
            cc.at(aa[i]).push_back(i+1);
        }
    }
    yn(false);
    return 0;
}
