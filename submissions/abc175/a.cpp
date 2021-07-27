#include <bits/stdc++.h>
using namespace std;
int main(){
    char a[3];
    long long now=0,ans=0;
    for(int i=0;i<3;i++){
        cin>>a[i];
        if(a[i]=='R'){
            now++;
        }
        else{
            ans=max(ans,now);
            now=0;
        }
    }
    cout<<max(ans,now)<<endl;
    return 0;
}
