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
#define MOD 1000000007

ll modFact(int n, int p)
{
    if (n >= MOD)
        return 0;
 
    int result = 1;
    for (int i = 1; i <= n; i++)
        result = (result * i) % MOD;
 
    return result;
}

ll ans;
int main () {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        fact[0]=1;
        for(int i=1;i<10005;i++) {
            fact[i]=i*fact[i-1];
        }


    }
    return 0;
}