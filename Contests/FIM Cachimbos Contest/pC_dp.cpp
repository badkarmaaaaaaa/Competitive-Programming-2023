#include <bits/stdc++.h>
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define sz(A) int(A.size())
#define FIFO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define all(A) begin(A),end(A)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<pair<ll,ll>> vll;
typedef vector<pair<int,int>> vii;
#define N 5000


int knapsack (int MaxWeight, int weight[], int value[], int n) {
    int dp[n+1][MaxWeight+1];

    for(int i=0; i<=n;i++) {
        for(int w=0; w<= MaxWeight; w++) {
            if( i==0 or w==0) {
                dp[i][w]=0;
            }
            else {
                if(weight[i-1]<=w) {
                    dp[i][w]=max(dp[i-1][w], dp[i-1][w-weight[i-1]] | value[i-1]);
                }
                else {
                    dp[i][w]=dp[i-1][w];
                }
            }
        }
    }

    return dp[n][MaxWeight];

    //return dp[n][MaxWeight];
}



int main () {
    int n, k; cin>>n>>k;

    //cin>>s>>n;
    int weight[n],value[n];
    for(int i=0; i<n; i++) {
        weight[i]=1;
        cin>>value[i];
    }

    cout<<knapsack(k,weight,value,n)<<endl;
    return 0;
}