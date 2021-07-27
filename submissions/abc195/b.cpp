#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long 
using namespace std;
const long long mod=1e9+7;
const ll infl = 1LL << 60;
template<typename T> using min_priority_queue = priority_queue<T, vector<T>, greater<T>>;
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main(){
    ll a,b,w;
    cin>>a>>b>>w;
    w*=1000;
    ll ansmax=w/a;
    ll ansmin=w/b;
    if(w%b!=0){
        ansmin++;
    }
    double j=w/ansmax,aa=a;
    if(ansmin>ansmax){
        cout<<"UNSATISFIABLE"<<endl;
    }
    else{
        cout<<ansmin<<" "<<ansmax<<endl;
    }
    return 0;
}
