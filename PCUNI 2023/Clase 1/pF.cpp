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
    ll n,a,b; cin>>n>>a>>b;

    bool flag = false;
    ll aAns, bAns;

    for(int i=0; i<= n/a ; i++) {
        if((n-i*a)%b==0 && (n-i*a)>=0) {
            aAns=i;
            bAns=(n-i*a)/b;
            flag = true;
            break;
        }
    }

    if(flag) {
        cout<<"YES"<< endl;
        cout<< aAns<< " "<<bAns<<endl;
    }
    else {
        cout<<"NO"<< endl;
    }
    
    return 0;
}