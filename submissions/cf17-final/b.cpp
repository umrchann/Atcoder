#include <bits/stdc++.h>
#define f(i,j,k)  for(int i=j;i<k;i++)
#define ll long long 
using namespace std;
int main(){
    string s;
    cin>>s;
    vector <ll> a(3,0);
    f(i,0,s.size()){
        if(s[i]=='a'){
            a[0]++;
        }
        else if(s[i]=='b'){
            a[1]++;
        }
        else{
            a[2]++;
        }
    }
    sort(a.begin(),a.end());
    if(a[2]-a[0]<=1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
