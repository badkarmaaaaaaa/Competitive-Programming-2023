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
#define N 2000100

int memo[N][N];
//int s,n;
//int weight[N],value[N];

vector <int> adj[N];
int maxY[N]={-1}, minY[N]={-1};


int fcalc(int x, int id) {
    int ans=maxY[x]-minY[x];
}

int dp (int x, int id) {
    if(memo[i][w]!=-1) return memo[i][w];
    if(i==0 or w==0) return 0;
    if(weight[i-1]<=w) return memo[i][w]=max(dp(i-1,w),dp(i-1,w-weight[i-1])+value[i-1]);
    return memo[i][w]=dp(i-1,w);
}


int main () {
    //memset(memo,-1,sizeof(memo));
        
    int t; cin>>t;
    //set <int> s;

    for(int i=0; i<t; i++) {
        int x,y; cin>>x>>y;
        x=x+1000000;
        y=y+1000000; // 0 a 2e6
        
        if(maxY[x]==-1) maxY[x]==y;
        else {
            maxY[x]=max(y,maxY[x]);
        }

        if(min[x]==-1) minY[x]==x;
        else {
            minY[x]=min(minY[x],y);
        }
    }



    return 0;
}