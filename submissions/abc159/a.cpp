#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int ans1=n*(n-1)/2;
    int ans2=m*(m-1)/2;
    cout<<ans1+ans2<<endl;
    return 0;
}
