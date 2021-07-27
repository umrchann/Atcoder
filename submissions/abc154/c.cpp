#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int a[200000];
  int n,ans=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a,a+n);
  for(int i=0;i<n-1;i++){
    if(a[i]==a[i+1]){
      ans=1;
      break;
    }
  }
  if(ans==0){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
  return 0;
}
