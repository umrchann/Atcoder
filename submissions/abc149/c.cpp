#include <bits/stdc++.h>
using namespace std;
#define f(i,j,k) for(int i=j;i<k;i++)
#define f2(i,j,k) for(int i=j;i>=k;i--)
bool qq(long long a){
    if(a<2) return false;
    for(long long i=2;i*i<=a;i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    long long n;
    cin>>n;
    while(!qq(n)){
        n++;
    }
    cout<<n<<endl;
    return 0;
}
