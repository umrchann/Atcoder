#include <iostream>
using namespace std;
int main(){
  char a[6];
  for(int i=0;i<6;i++){
    cin>>a[i];
  }
  if(a[2]==a[3]&&a[4]==a[5]){
    cout<<"Yes"<<endl;
  }
  else{
    cout<<"No"<<endl;
  }
  return 0;
}
