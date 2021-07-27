#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n+1];
  for (int i=1;i<=n;i++){
    int s;
    cin>>s;
    a[s]=i;
  }
  for(int i=1;i<n;i++){
    cout<<a[i]<<" ";
  }
  cout<<a[n]<<endl;
  return 0;
}
