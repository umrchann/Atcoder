#include <iostream>
using namespace std;
int main(){
  long long a,b;
  cin>>a>>b;
  long long c,d,e=0,f;
  for(long long i=0;i<b;i++){
    if(i==0){
      cin>>c;
      f=c;
    }
    else{
      cin>>d;
      if(d-c>e){
        e=d-c;
      }
      c=d;
    }
  }
  if(a-c+f>e){
    e=a-c+f;
  }
  cout<<a-e<<endl;
  return 0;
}
