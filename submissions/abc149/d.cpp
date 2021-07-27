#include <bits/stdc++.h>
#define f(i,j,k)  for(int i=j;i<k;i++)
#define ll long long 
#define ld long double
using namespace std;
int main(){
    ll n,k,r,s,p,sum=0;
    string t;
    cin>>n>>k;
    cin>>r>>s>>p;
    cin>>t;
    char trash[t.size()];
    f(i,0,t.size()){
        if(t[i]=='r'){
            if(i<k){
                sum+=p;
                trash[i]='p';
            }
            else if(trash[i-k]!='p'){
                sum+=p;
                trash[i]='p';
            }
            else{
                if(t[i+k]=='p'){
                    trash[i]='r';
                }
                else{
                    trash[i]='s';
                }
            }
        }
        else if(t[i]=='s'){
            if(i<k){
                sum+=r;
                trash[i]='r';
            }
            else if(trash[i-k]!='r'){
                sum+=r;
                trash[i]='r';
            }
            else{
                if(t[i+k]=='r'){
                    trash[i]='s';
                }
                else{
                    trash[i]='p';
                }
            }
        }
        else{
            if(i<k){
                sum+=s;
                trash[i]='s';
            }
            else if(trash[i-k]!='s'){
                sum+=s;
                trash[i]='s';
            }
            else{
                if(t[i+k]=='s'){
                    trash[i]='p';
                }
                else{
                    trash[i]='r';
                }
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
