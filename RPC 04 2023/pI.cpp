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

int main() {
    int n,k;cin>>n>>k;
    vl tam(n);
    cin >> tam[0];
    tam[0] = -tam[0];
    if(tam[0] < 1e-9) tam[0] = 0.0;
    for(int i=1;i<n;i++){
        int x; cin >> x;
        tam[i] = tam[i - 1] - 1.0*x;
        if(tam[i] < 0) tam[i] = 0;
    }
    sort(all(tam));
    reverse(all(tam));
    for(int i = 0, x; i < k; i++) {
        cin >> x;
        x *= 5;
        int lo = -1, hi = n - 1;
        // 1 1 1 1 1 0 0 0 0
        while(lo < hi) {
            int me = (lo + hi + 1)/2;
            if(tam[me] >= x) lo = me;
            else hi = me - 1;
        }
        cout << lo + 1 << " \n"[i == k - 1];
    }
    
    
    return 0;
}