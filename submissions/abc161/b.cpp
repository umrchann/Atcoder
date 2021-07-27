#include <bits/stdc++.h>
#define f(i,j,k) for(int i=j;i<k;i++)
using namespace std;
int main(){
    int a,b,sum=0;
    cin>>a>>b;
    int c[a];
    f(i,0,a){
        cin>>c[i];
        sum+=c[i];
    }
    double sum2=sum;
    double b2=b;
    sort(c,c+a);
    reverse(c,c+a);
    double ans=c[b-1];
    if(ans<sum2/(4*b2)){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
    return 0;
}
