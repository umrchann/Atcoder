#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long
using namespace std;
int main(){
    ll n,sum=0,ans=0;
    cin>>n;
    ll a[n],b[n];
    vector<ll> c;
    f(i,0,n){
        cin>>a[i];
    }
    f(i,0,n){
        cin>>b[i];
    }
    f(i,0,n){
        if(a[i]<b[i]){
            sum+=a[i]-b[i];
            ans++;
        }
        else{
            c.push_back(a[i]-b[i]);
        }
    }
    sort(c.begin(),c.end());
    reverse(c.begin(),c.end());
    if(sum>=0){
        cout<<ans<<endl;
        return 0;
    }
    for(auto i=c.begin();i!=c.end();++i){
        sum+=*i;
        ans++;
        if(sum>=0){
            cout<<ans<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}
