#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;

int main(){
    string s;
    cin>>s;
    f(i,0,s.size()){
        if(i%2!=0){
            if(islower(s[i])){
                cout<<"No"<<endl;
                return 0;
            }
        }
        else{
            if(isupper(s[i])){
                cout<<"No"<<endl;
                return 0;
            }
        }
    }
    cout<<"Yes"<<endl;
}
