#include <iostream>
using namespace std;
int main(){
  string n;
  cin>>n;
  if(n=="111"){
    cout<<3<<endl;
  }
  else if(n=="101"||n=="110"||n=="011"){
    cout<<2<<endl;
  }
  else if(n=="100"||n=="010"||n=="001"){
    cout<<1<<endl;
  }
  else if(n=="000"){
    cout<<0<<endl;
  }
  return 0;
}
