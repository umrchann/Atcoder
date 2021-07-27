#include <iostream>
using namespace std;
int main(){
  double n,ans;
  cin>>n;
  if((int)n==1){
    ans=n;
  }
  else {
    if((int)n%2==0){
    ans=n/2;
  }
  else if((int)n%2!=0){
    ans=(n+1)/2;
  }
  }
  cout<<ans/n<<endl;
  return 0;
}
