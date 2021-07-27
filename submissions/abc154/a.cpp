#include <iostream>
using namespace std;
int main(){
  int a,b;
  string c,d,ans;
  cin>>c>>d;
  cin>>a>>b;
  cin>>ans;
  if(ans==c){
    cout<<a-1<<" "<<b<<endl;
  }
  else{
    cout<<a<<" "<<b-1<<endl;
  }
  return 0;
}
