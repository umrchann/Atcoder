#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long a[n],sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i!=0&&a[i-1]>a[i]){
            sum+=a[i-1]-a[i];
            a[i]=a[i-1];
        }
    }
    cout<<sum<<endl;
    return 0;
}
