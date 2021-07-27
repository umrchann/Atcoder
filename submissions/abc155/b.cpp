#include <iostream>
using namespace std;
int main(){
  int n,a=1,b;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>b;
    if(b%2==0){
      if(b%3!=0&&b%5!=0){
        a=0;
      }
    }
  }
  if(a==0){
    cout<<"DENIED"<<endl;
  }
  else{
    cout<<"APPROVED"<<endl;
  }
}
