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
#define N 30007
#define MIN -1000000000;

ll memo[N][5];
int coins[5]={1,5,10,25,50};

// greatCoin: current coin
ll dp (int n, int greatCoin) {
    if(n<0) return 0;
    if(n==0) return 1;
    if(memo[n][greatCoin]) return memo[n][greatCoin];
    
    // La condicion del k<=4 tambien tiene que ser cumplida
    for(int k=0; coins[k]<=greatCoin && k<5;k++) {
        memo[n][greatCoin] = memo[n][greatCoin] + dp(n-coins[k],coins[k]);
    }

    return memo[n][greatCoin];
}


int main () {
    int n;
    while(cin>>n) {
        if(dp(n, 50)==1) {
            cout<<"There is only 1 way to produce "<<n<<" cents change."<<endl;
        }
        else {
            cout<<"There are "<<dp(n,50)<<" ways to produce "<<n<<" cents change."<<endl;
        }
    }
    return 0;
}