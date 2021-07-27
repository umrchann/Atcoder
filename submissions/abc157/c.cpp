#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n,m,ans=0,s,c,j=0;
  cin>>n>>m;
  int a[n+1],u[n+1];
  for(int i=1;i<=n;i++){
    if(i==1){
        a[i]=1;
    }
    else{
        a[i]=0;
    }
    u[i]=0;
  }
  for(int i=0;i<m;i++){
    cin>>s>>c;
    if(n!=1&&s==1&&c==0){
      j=1;
    }
    else if(a[s]!=c&&u[s]==1){
      j=1;
    }
    else{
      a[s]=c;
      u[s]=1;
    }
  }
  if(j==1){
    cout<<-1<<endl;
  }
  else if(m==0&&n==1){
      cout<<0<<endl;
  }
  else{
    for(int i=1;i<=n;i++){
      ans+=a[i]*pow(10,n-i);
    }
    cout<<ans<<endl;
  }
  return 0;
}
