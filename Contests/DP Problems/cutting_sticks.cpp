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
#define N 1005

int memo[N][N];
int cuts[55];
int l,n;


int dp(int posLeft, int posRight) {
    int currMin=1e9;
    if(memo[posLeft][posRight]!=-1) return memo[posLeft][posRight];
    if(posRight-posLeft==1) return 0;
    for(int k=posLeft+1; k<posRight;k++) {
        currMin=min(cuts[posRight]-cuts[posLeft]+dp(posLeft,k)+dp(k,posRight),currMin);
    }
    return memo[posLeft][posRight]=currMin;
}

int main () {
    while(cin>>l) {
        if(l==0) break;
        memset(memo,-1,sizeof(memo));
        cin>>n;
        cuts[0]=0;
        cuts[n+1]=l;
        for(int i=1; i<=n;i++) {
            cin>>cuts[i];
        }
        cout<<"The minimum cutting is "<<dp(0,n+1)<<"."<<endl;
    }
    return 0;
}