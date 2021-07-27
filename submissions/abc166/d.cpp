#include <bits/stdc++.h>
#define f(i,j,k) for(int i=j;i<k;i++)
using namespace std;
int main(){
    long long n,a=0,b,sum;
    cin>>n;
    vector <long long> y;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            y.push_back(i);
        }
    }
     while(1){
        f(i,0,y.size()){
            b=a-y[i];
            sum=a*a*a*a+a*a*a*b+a*a*b*b+a*b*b*b+b*b*b*b;
            if(sum==n/y[i]){
                cout<<a<<" "<<b<<endl;
                return 0;
            }
        }
        a++;
    }
}
