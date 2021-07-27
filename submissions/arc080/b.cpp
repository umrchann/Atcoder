#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=998244353;
void chmin(int& a, int b){ if(a > b) a = b; }
void chmax(int& a, int b){ if(a < b) a = b; }
int main(){
    ll h,w,n,now=0,d;
    cin>>h>>w;
    cin>>n;
    vector<vector<ll>> a(h);
    f(i,0,n){
        cin>>d;
        f(j,0,d){
            a[now].push_back(i+1);
            if(a[now].size()==w){
                now++;
            }
        }
    }
    f(i,0,h){
        if(i%2==1){
            reverse(a[i].begin(),a[i].end());
        }
    }
    f(i,0,h){
        cout<<a[i][0];
        f(j,1,w){
            cout<<" "<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}
