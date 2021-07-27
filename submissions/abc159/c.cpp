#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    long double n;
    cin>>n;
    long double l=n/3;
    cout<<fixed << setprecision(12)<<l*l*l<<endl;
    return 0;
}
