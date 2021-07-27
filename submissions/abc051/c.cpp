#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=998244353;
void chmin(int& a, int b){ if(a > b) a = b; }
void chmax(int& a, int b){ if(a < b) a = b; }
int main(){
    ll sx,sy,tx,ty;
    cin>>sx>>sy>>tx>>ty;
    ll dx=tx-sx,dy=ty-sy;
    cout<<string(dy,'U')<<string(dx,'R');
    cout<<string(dy,'D')<<string(dx,'L');
    cout<<'L'<<string(dy+1,'U')<<string(dx+1,'R')<<'D';
    cout<<'R'<<string(dy+1,'D')<<string(dx+1,'L')<<'U';
    cout<<endl;
    return 0;
}
