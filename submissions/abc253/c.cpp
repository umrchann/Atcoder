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
int main(){
    ll q,key,x,c;
    cin>>q;
    map <ll,ll> data;
    f(i,0,q){
        cin>>key;
        if(key==1){
            cin>>x;
            data[x]++;
        }
        else if(key==2){
            cin>>x>>c;
            if(data[x]<=c){
                data.erase(x);
            }
            else{
                data[x]-=c;
            }
        }
        else{
            cout<<data.rbegin()->first-data.begin()->first<<endl;
        }
    }
    return 0;
}
