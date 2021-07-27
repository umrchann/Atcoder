#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,ss;
    cin>>s;
    long long sum=0,sss;
    for(int i=0;i<s.size();i++){
        ss=s[i];
        sss=stoll(ss);
        sum+=sss;
    }
    if(sum%9==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
