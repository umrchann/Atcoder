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
	ll n,m,k,ans=0;
	cin>>n>>m;
	ll a[m],b[m];
	f(i,0,m){
	    cin>>a[i]>>b[i];
	}
	cin>>k;
	ll c[k],d[k];
	f(i,0,k){
	    cin>>c[i]>>d[i];
	}
	f(i,0,1<<k){
	    vector<bool> ball(n);
	    f(j,0,k){
	        ball[i&1<<j?c[j]:d[j]]=1;
	    }
	    ll c=0;
	    f(i,0,m){
	        if(ball[a[i]]&&ball[b[i]]){
	            c++;
	        }
	    }
	    ans=max(ans,c);
	}
	cout<<ans<<endl;
}
