#include <bits/stdc++.h>
#define f(i,j,k) for(int i=j;i<k;i++)
using namespace std;
int main(){
    long long n,k,d,a,sum=0;
    cin>>n>>k;
    vector <long long> ans(n,0);
    f(i,0,k){
        cin>>d;
        f(j,0,d){
            cin>>a;
            ans[a-1]++;
        }
    }
    f(i,0,n){
        if(ans[i]==0){
            sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
}
