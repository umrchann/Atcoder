#include <bits/stdc++.h>
#define f(i,j,k) for(int i=j;i<k;i++)
using namespace std;
int main(){
    long long n,b;
    cin>>n;
    vector<long long> a(n,0);
    f(i,0,n-1){
        cin>>b;
        a[b-1]++;
    }
    f(i,0,n){
        cout<<a[i]<<endl;
    }
    return 0;
}
