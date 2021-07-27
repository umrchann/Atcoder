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
	ll h,w,ans=0;
	cin>>h>>w;
	char s[h][w];
	f(i,0,h){
	    f(j,0,w){
	        cin>>s[i][j];
	    }
	}
	f(i,0,h-1){
	    f(j,0,w-1){
	        ll c=0;
	        if(s[i][j]=='#'){
	            c++;
	        }
	        if(s[i][j+1]=='#'){
	            c++;
	        }
	        if(s[i+1][j]=='#'){
	            c++;
	        }
	        if(s[i+1][j+1]=='#'){
	            c++;
	        }
	        if(c==1||c==3){
	            ans++;
	        }
	    }
	}
	cout<<ans<<endl;
}
