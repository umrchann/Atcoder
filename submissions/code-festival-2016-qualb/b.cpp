#include <bits/stdc++.h>
#define f(i,j,k) for(int i=j;i<k;i++)
using namespace std;
int main(){
    long long n,a,b,j=0,j2=0;
    cin>>n>>a>>b;
    a+=b;
    string s;
    cin>>s;
    f(i,0,n){
        if(s[i]=='a'){
            if(j<a){
                cout<<"Yes"<<endl;
                j++;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        else if(s[i]=='b'){
            if(j<a&&j2<b){
                cout<<"Yes"<<endl;
                j++;
                j2++;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
