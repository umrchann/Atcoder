#include <bits/stdc++.h>
#define f(i,j,k) for(int i=j;i<k;i++)
#define f2(i,j,k) for(int i=j;i>k;i--)
using namespace std;
int main(){
    long long n,k,c,ans=0;
    cin>>n>>k;
    map <long long,long long> b;
    vector <long long> a;
    f(i,0,n){
        cin>>c;
        b[c]++;
    }
    for(auto x: b){
        a.push_back(x.second);
    }
    sort(a.begin(),a.end());
    if(a.size()<=k){
        cout<<0<<endl;
    }
    else{
        f(i,0,a.size()-k){
            ans+=a[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
