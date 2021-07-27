#include <iostream>
#include <string>
using namespace std;
int main(){
  int n,count=1;
  string a;
  cin>>n;
  cin>>a;
  char j=a[0];
  for(int i=1;i<n;i++){
    if(j!=a[i]){
      count++;
      j=a[i];
    }
  }
  cout<<count<<endl;
  return 0;
}
