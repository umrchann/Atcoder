#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
void chmin(int& a, int b){ if(a > b) a = b; }
void chmax(int& a, int b){ if(a < b) a = b; }

int main(){
    string s;
    cin>>s;
    vector<ll> a(26,0);
    f(i,0,s.size()){
        a[s[i]-'a']++;
    }
    vector<ll> d(26,0);
    if(s.size()<26){
        for(char j='a';j<='z';j++){
            if(a[j-'a']==0){
                cout<<s+j<<endl;
                return 0;
            }
    
        }
    }
    else{
        f2(i,s.size()-1,1){
            d[s[i]-'a']++;
            if(s[i-1]<s[i]){
                for(char j='a';j<='z';j++){
                    if(d[j-'a']!=0&&j>s[i-1]){
                        cout<<s.substr(0,i-1)+j<<endl;
                        return 0;
                    }
                }
            }
        }
        cout<<-1<<endl;
    }
    return 0;
}
