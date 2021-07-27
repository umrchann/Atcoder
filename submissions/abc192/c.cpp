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
	ll n,k;
	cin>>n>>k;
	f(i,0,k){
	    ll c[20]={};
	    while(n){
	        c[n%10]++;
	        n/=10;
	    }
	    ll g1=0,g2=0;
	    f2(i,9,0){
	        f(j,0,c[i]){
	            g1=g1*10+i;
	        }
	    }
	    f(i,0,10){
	        f(j,0,c[i]){
	            g2=10*g2+i;
	        }	        
	    }
	    n=g1-g2;
	}
	cout<<n<<endl;
}
