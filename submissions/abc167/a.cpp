#include <bits/stdc++.h>
using namespace std;
#define f(i,j,k) for(int i=j;i<k;i++)
#define f2(i,j,k) for(int i=j;i>=k;i--)
int main(){
    string s,t,a;
    cin>>s;
    cin>>t;
    a=t[t.size()-1];
    s+=a;
    if(s==t){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
