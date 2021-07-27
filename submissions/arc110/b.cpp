#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
int main(){
    ll n;
    string s;
    cin>>n;
    cin>>s;
    ll ans=2*pow(10,10);
    ll now=1;
    char j=s[0];
    f(i,1,n-1){
        if(s[i]=='0'){
            if(s[i-1]!='1'||s[i+1]!='1'){
                now=0;
                break;
            }
        }
        else if(j=='0'){
             if(s[i-1]!='0'||s[i+1]!='1'){
                 now=0;
                 break;
            }
        }
        else{
            if(s[i-1]!='1'||s[i+1]!='0'){
                 now=0;
                 break;
            }
        }
        j=s[i];
    }
    if(now==0){
        cout<<0<<endl;
    }
    else if(n==1){
        if(s[0]=='1'){
            cout<<ans<<endl;
        }
        else{
            cout<<ans/2<<endl;
        }
    }
    else if(n==2){
        if(s[0]=='0'&&s[1]=='1'){
            cout<<ans/2-1<<endl;
        }
        else if(s[0]=='1'&&s[1]=='0'){
            cout<<ans/2<<endl;
        }
        else if(s[0]=='1'&&s[1]=='1'){
            cout<<ans/2<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    else{
        if(s[0]=='1'&&s[1]=='1'&&s[2]=='0'){
            cout<<ans/2-(n-1)/3<<endl;
        }
        else if(s[0]=='1'&&s[1]=='0'&&s[2]=='1'){
            cout<<ans/2-n/3<<endl;
        }
        else if(s[0]=='0'&&s[1]=='1'&&s[2]=='1'){
            cout<<ans/2-(n+1)/3<<endl;
        }
    }
    return 0;
}
