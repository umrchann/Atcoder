#include <iostream>
using namespace std;
int main(){
  int n,x,count=0;
  cin>>n>>x;
  int a[n];
  int max=0;
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(max<a[i]){
      max=a[i];
    }
  }
  for(int i=0;i<n;i++){
    if(max-a[i]>x){
      count++;
    }
  }
  cout<<n-count<<endl;
  return 0;
}
