#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
int main(){
    ll h,w;
    cin>>h>>w;
    char d[h+2][w+2];
    ll c[h+2][w+2];
    ll s[h+2][w+2];
    f(i,0,h+2){
        f(j,0,w+2){
            if(i==0||i==h+1||j==0||j==w+1){
                c[i][j]=0;
                d[i][j]='.';
            }
            else{
                cin>>d[i][j];
                if(d[i][j]=='.'){
                    c[i][j]=0;
                }
                else{
                    c[i][j]=1;
                }
                s[i][j]=0;
            }
        }
    }
    f(i,1,h+1){
        f(j,1,w+1){
            s[i][j]+=c[i-1][j-1]+c[i-1][j]+c[i-1][j+1]+c[i][j-1]+c[i][j+1]+c[i+1][j-1]+c[i+1][j]+c[i+1][j+1];
        }
    }
    f(i,1,h+1){
        f(j,1,w+1){
            if(d[i][j]!='.'){
                cout<<"#";
            }
            else{
                cout<<s[i][j];
            }
        }
        cout<<endl;
    }
    return 0;
}
