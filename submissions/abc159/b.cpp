#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    string s1=s,s2=s,s3=s;
    s1=s1.erase((n-1)/2);
    s2=s2.substr((n+1)/2);
    string s4=s1,s5=s2;
    reverse(s3.begin(), s3.end());
    reverse(s4.begin(), s4.end());
    reverse(s5.begin(), s5.end());
    if(s==s3&&s1==s4&&s2==s5){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
