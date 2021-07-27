#include <iostream>
using namespace std;
int main(){
  long n,a,b;
  cin>>n>>a>>b;
  long c=a+b;
  long j1=n/c;
  long j2=n%c;
  if(a<j2){
    cout<<a*j1+a<<endl;
  }
  else{
    cout<<a*j1+j2<<endl;
  }
  return 0;
}
