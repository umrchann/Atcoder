#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,ans=0;
    cin>>n;
    long long l[n];
    for(int i=0;i<n;i++){
        cin>>l[i];
    }
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(l[i]<l[j]+l[k]&&l[i]>abs(l[j]-l[k])){
                    if(l[i]!=l[j]&&l[i]!=l[k]&&l[k]!=l[j]){
                        ans++;
                    }
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
