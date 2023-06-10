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
    int v,t;
    while(cin>>v>>t) {
        if(t==0) { cout<<0<<endl; continue;}
        float accel = v/(1.0*t);
        float ans = 2*accel*pow(t,2);
        cout<<ans<<endl;
    }
    
    return 0;
}