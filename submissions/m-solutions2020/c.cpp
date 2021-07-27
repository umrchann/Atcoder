#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    long long a[n+1][2];
    for(int i=1;i<=k-1;i++){
        cin>>a[i][0];
        a[i][1]=a[i][0];
    }
    for(int i=k;i<=n;i++){
        cin>>a[i][1];
        if(k==1){
            a[i][0]=a[i][1];
        }
        else{
            a[i][0]=a[i-k+1][1];
        }
    }
    for(int i=k+1;i<=n;i++){
        if(a[i][1]>a[i-1][0]){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
