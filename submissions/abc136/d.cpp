#include <bits/stdc++.h>
#define f(i,j,k) for(int i=j;i<k;i++)
#define f2(i,j,k) for(int i=j;i>=k;i--)
#define ll long long
using namespace std;
int main(){
    string s;
    cin>>s;
    ll r=0,l=0;
    ll now=1;
    vector <ll> a(s.size(),0);
    f(i,0,s.size()){
        if(s[i]=='R'){
            r++;
        }
        else{
           if(r%2==1){
               a[i]+=r/2;
               a[i-1]+=r/2+1;
            }
            else{
                a[i]+=r/2;
                a[i-1]+=r/2;
            }
            r=0;
        }
    }
    f2(i,s.size()-1,0){
        if(s[i]=='L'){
            l++;
        }
        else{
            if(l%2==1){
                a[i]+=l/2;
                a[i+1]+=l/2+1;
            }
            else{
                a[i]+=l/2;
                a[i+1]+=l/2;
            }
            l=0;
        }
    }
    f(i,0,s.size()-1){
        cout<<a[i]<<" ";
    }
    cout<<a[s.size()-1]<<endl;
    return 0;
}
