#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int h[n];//高さ
    int dp[n];//dp
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    dp[0]=0;//初期値
    dp[1]=abs(h[0]-h[1]);//初期値
    for(int i=2;i<n;i++){
        dp[i]=min(dp[i-1]+abs(h[i]-h[i-1]),dp[i-2]+abs(h[i]-h[i-2]));//更新
    }
    cout<<dp[n-1]<<endl;
    return 0;
}
