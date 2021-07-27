#include <iostream>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  if(n<10){
    cout<<k+100*(10-n)<<endl;
  }
  else{
    cout<<k<<endl;
  }
  return 0;
}
