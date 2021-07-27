#include <bits/stdc++.h>
#define f(i,j,k)  for(int i=j;i<k;i++)
#define ll long long 
#define ld long double
using namespace std;
int main(){
    deque <char> a,b,c;
    string s;
    cin>>s;
    f(i,0,s.size()){
        a.push_back(s[i]);
    }
    cin>>s;
    f(i,0,s.size()){
        b.push_back(s[i]);
    }
    cin>>s;
    f(i,0,s.size()){
        c.push_back(s[i]);
    }
    char now='a';
    while(1){
        if(now=='a'){
            if(a.empty()){
                cout<<"A"<<endl;
                return 0;
            }
            now=a[0];
            a.pop_front();
        }
        else if(now=='b'){
            if(b.empty()){
                cout<<"B"<<endl;
                return 0;
            }
            now=b[0];
            b.pop_front();
        }
        else if(now=='c'){
            if(c.empty()){
                cout<<"C"<<endl;
                return 0;
            }
            now=c[0];
            c.pop_front();
        }
        
    }
    return 0;
}
