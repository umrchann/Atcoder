#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
int main(){
    string n;
    cin>>n;
    ll sum=0;
    map<ll,ll> c;
    f(i,0,n.size()){
        char s=n[i];
        ll a=s-'0';
        sum+=a;
        c[a%3]++;
    }
    if(sum%3==0){
        cout<<0<<endl;
    }
    else{
        if(c[sum%3]>=1&&n.size()>=2){
            cout<<1<<endl;
        }
        else{
            if(sum%3==1){
                if(c[2]>=2&&n.size()>=3){
                    cout<<2<<endl;
                }
                else{
                    cout<<-1<<endl;
                }
            }
            else{
                if(c[1]>=2&&n.size()>=3){
                    cout<<2<<endl;
                }
                else{
                    cout<<-1<<endl;
                }
            }
        }
        
    }
    return 0;
}
