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

int memo[105][10000+5];
int s,n;
int weight[105];

int dp (int i, int w) {
    if(memo[i][w]!=-1) return memo[i][w];
    if(i==0 or w==0) return 0;
    if(weight[i-1]<=w) return memo[i][w]=max(dp(i-1,w),dp(i-1,w-weight[i-1])+1);
    return memo[i][w]=dp(i-1,w);
}

int main () {
    memset(memo,-1,sizeof(memo));
    cin>>n>>s;

    for(int i=0; i<n; i++) {
        cin>>weight[i];
    }

    cout<<dp(n,s)<<endl;
    return 0;
}