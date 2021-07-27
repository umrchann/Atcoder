#include <bits/stdc++.h>
#define f(i,j,k)  for(int i=j;i<k;i++)
#define ll long long 
#define ld long double
using namespace std;
int main(){
    ll n;
    cin>>n;
    vector<ll> b(n),ans;
    f(i,0,n){
        cin>>b[i];
        
    }
    f(i,0,n){
        ll now=-1;
        for(ll j=b.size()-1;j>=0;j--){
            if(j+1==b[j]){
                ans.push_back(j+1);
                b.erase(b.begin()+j);
                now=j+1;
                break;
            }
        }
        if(now==-1){
            cout<<-1<<endl;
            return 0;
        }
    }
    reverse(ans.begin(),ans.end());
    f(i,0,n){
        cout<<ans[i]<<endl;
    }
    return 0;
}
