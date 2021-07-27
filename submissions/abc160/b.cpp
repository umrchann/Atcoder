#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a=n/500;
  int b=n%500;
  b=b/5;
  cout<<a*1000+b*5<<endl;
  return 0;
}
