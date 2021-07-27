#include <bits/stdc++.h>
#define f(i,j,k) for(long long i=j;i<k;i++)
#define f2(i,j,k) for(long long i=j;i>=k;i--)
#define ll long long
using namespace std;
int main(){
    long double a,b,x;
    cin>>a>>b>>x;
    if(a*a*b<2*x){
        cout << fixed << setprecision(15) << atan((2*b-2*x/(a*a))/a)*180/M_PI << endl;
    }
    else{
        cout << fixed << setprecision(15) << atan(a*b*b/(2*x))*180/M_PI << endl;
    }
    return 0; 
}
