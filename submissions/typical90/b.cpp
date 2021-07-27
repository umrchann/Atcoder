#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
const long long mod2=998244353;
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
bool solve(string s) {
	int dep = 0;
	f(i,0,s.size()) {
		if (s[i] == '(') dep += 1;
		if (s[i] == ')') dep -= 1;
		if (dep < 0) return false;
	}
	if (dep == 0) return true;
	return false;
}
int main(){
    ll n;
    cin>>n;
    for (int i=0;i<(1<<n);i++){
        string now="";
        for(int j=n-1;j>=0;j--){
            if((i&(1<<j))==0){
                now+="(";
            }
            else{
                now+=")";
            }
        }
        if(solve(now)){
            cout<<now<<endl;
        }
    }
    return 0;
}
