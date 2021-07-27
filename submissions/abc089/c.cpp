#include <bits/stdc++.h>
#define f(i,j,k)  for(int i=j;i<k;i++)
#define ll long long 
#define ld long double
using namespace std;
int main(){
    ll n;
    cin>>n;
    vector <ll> a(5,0);
    int64_t ans=0;
    string s;
    f(i,0,n){
        cin>>s;
        if(s[0]=='M'){
            a[0]++;
        }
        else if(s[0]=='A'){
            a[1]++;
        }
        else if(s[0]=='R'){
            a[2]++;
        }
        else if(s[0]=='C'){
            a[3]++;
        }
        else if(s[0]=='H'){
            a[4]++;
        }
    }
    f(i,0,3){
        f(j,i+1,4){
            f(k,j+1,5){
                ans+=int64_t(a[i]*a[j]*a[k]);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
