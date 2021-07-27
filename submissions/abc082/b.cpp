#include <bits/stdc++.h>
#define f(i,j,k) for(int i=j;i<k;i++)
#define f2(i,j,k) for(int i=j;i>k;i--)
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end(),greater<>());
    if(s<t){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
