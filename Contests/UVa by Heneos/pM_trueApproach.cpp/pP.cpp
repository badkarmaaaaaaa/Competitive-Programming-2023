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
    int b, n;

    while(cin>> b>>n) {
        if(b==0 && n==0) break;

        int money[b+10];

        for(int i=1; i<= b;i++) {
            cin>>money[i];
        }

        for(int i=0; i<n; i++) {
            int debtor, creditor, cash; cin>> debtor>> creditor>>cash;

            money[debtor]-=cash;
            money[creditor]+=cash;
        }

        bool flag = true;

        for(int i=1; i<= b;i++) {
            if(money[i]<0) flag=false;
        }

        cout << (flag? "S":"N") << endl;

    }
    
    return 0;
}