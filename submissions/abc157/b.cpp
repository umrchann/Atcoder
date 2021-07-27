#include <bits/stdc++.h>
using namespace std;
#define f(i,j,k) for(int i=j;i<k;i++)
int main(){
    long long n,a[3][3],b[10];
    bool aa[3][3];
    f(i,0,3){
        f(j,0,3){
            cin>>a[i][j];
        }
    }
    cin>>n;
    f(i,0,n){
        cin>>b[i];
    }
    f(i,0,3){
        f(j,0,3){
            aa[i][j]=false;
            f(k,0,n){
                if(a[i][j]==b[k]){
                    aa[i][j]=true;
                }
            }
        }
    }
    string ans="No";
    f(i,0,3){
        if(aa[0][i]&&aa[1][i]&&aa[2][i]){
            ans="Yes";
            break;
        }
        else if(aa[i][0]&&aa[i][1]&&aa[i][2]){
            ans="Yes";
            break;
        }
    }
    if(aa[0][0]&&aa[1][1]&&aa[2][2]){
        ans="Yes";
    }
    if(aa[0][2]&&aa[1][1]&&aa[2][0]){
        ans="Yes";
    }
    cout<<ans<<endl;
    return 0;
}
