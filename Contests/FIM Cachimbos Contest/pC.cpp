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
#define N 100

int memo[N][N];
///int s,n;
int n,k;
int weight[N],value[N];

int dp (int i, int w) {
    if(memo[i][w]!=-1) return memo[i][w];
    if(i==0 or w==0) return 1;
    if(weight[i-1]<=w) return memo[i][w]=max(dp(i-1,w),dp(i-1,w-weight[i-1])|value[i-1]);
    return memo[i][w]=dp(i-1,w);

}

int main () {
    memset(memo,-1,sizeof(memo));
    cin>>n>>k;

    
    
    
    //cin>>s>>n;

    for(int i=0; i<n; i++) {
        weight[i]=1;
        cin>>value[i];
    }

    cout<<dp(n,k)<<endl;
    return 0;
}