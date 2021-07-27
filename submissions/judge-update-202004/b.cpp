#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,x;
  char c;
  cin>>n;
  vector<int> a,b;
  for(int i=0;i<n;i++){
    cin>>x>>c;
    if(c=='R'){
      a.push_back(x);
    }
    else{
      b.push_back(x);
    }
  }
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  for(int i=0;i<(int)a.size();i++){
    cout<<a[i]<<endl;
  }
  for(int i=0;i<(int)b.size();i++){
    cout<<b[i]<<endl;
  }
}
