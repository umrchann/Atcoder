#include <bits/stdc++.h>
#define f(i,j,k)  for(int i=j;i<k;i++)
#define ll long long 
#define ld long double
using namespace std;
int main(){
    string s;
    ll q,t,f,now=0;
    cin>>s;
    cin>>q;
    deque<char> ans;
    char c;
    for(auto d : s){
		ans.push_back(d);
	}
    f(i,0,q){
        cin>>t;
        if(t==1){
            now++;
        }
        else{
            cin>>f>>c;
            if(f==1){
                if(now%2==0){
                    ans.push_front(c);
                }
                else{
                    ans.push_back(c);
                }
            }
            else{
                if(now%2==0){
                    ans.push_back(c);
                }
                else{
                    ans.push_front(c);
                }
            }
        }
    }
    ll n=ans.size();
    f(i,0,n){
        char ans2;
		if(now%2==0){
			ans2 = ans.front();
			ans.pop_front();
		}
		else{
			ans2 = ans.back();
			ans.pop_back();
		}
		cout<<ans2;
    }
    cout<<endl;
    
    return 0;
}
