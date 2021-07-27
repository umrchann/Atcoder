#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
void chmin(int& a, int b){ if(a > b) a = b; }
void chmax(int& a, int b){ if(a < b) a = b; }

int main(){
    string s;
    cin>>s;
    char c[3];
    f(i,0,3){
        c[i]=s[i];
    }
    cout<<c[1]<<c[2]<<c[0]<<endl;
    return 0;
}
