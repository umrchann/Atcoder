#include <iostream>
using namespace std;
int main(){
  int a,b,j=0;
  cin>>a>>b;
  int ans=100*a/8;
  while(ans*8/100<a+1){
      if(ans*8/100==a&&ans/10==b){
          j=1;
          break;
      }
      ans+=1;
  }
  if(j==0){
      cout<<-1<<endl;
  }
  else{
      cout<<ans<<endl;
  }
  return 0;
}
