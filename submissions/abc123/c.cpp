#include <bits/stdc++.h>
#define f(i,j,k)  for(int i=j;i<k;i++)
#define ll long long 
#define ld long double
using namespace std;
int main(){
    int64_t n,a[5];
    cin>>n>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
    sort(a,a+5);
    cout<<(n-1)/a[0]+5<<endl;
    return 0;
}
