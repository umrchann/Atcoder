#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,r=0,w=0,r2=0,w2=0;
    cin>>n;
    char a[200000];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]=='R'){
            r++;
        }
        else{
            w++;
        }
    }
    for(int i=r;i<n;i++){
        if(a[i]=='R'){
            r2++;
        }
        else{
            w2++;
        }
    }
    cout<<r2<<endl;
    return 0;
}
