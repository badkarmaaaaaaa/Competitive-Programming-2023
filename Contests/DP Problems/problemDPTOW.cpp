#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int dp[101][100005];

void solve(vi &w,int s,int W){
    for(int i=0;i<=s;i++){
        for(int u=0;u<=W;u++){
            if(i==0 || u==0){
                dp[i][u]=0;
            }
            else {
                if(w[i-1]>u) dp[i][u]=dp[i-1][u];
                else {
                    dp[i][u]=max(dp[i-1][u-w[i-1]]+w[i-1],dp[i-1][u]);
                }
            }
        }
    }
} 
int main(){
    int t;cin>>t;
    int c=1;
    while(t--){ 
        int n,W=0;
        cin>>n;
        vi w(n);
        for(int i=0;i<n;i++){
            cin>>w[i];
            W+=w[i];
        }

        solve(w,n,W/2);
        int r=dp[n][W/2];
        cout<<"Case "<<c<<": "<<r<<" "<<W-r<<endl;
        c++;
    }
}