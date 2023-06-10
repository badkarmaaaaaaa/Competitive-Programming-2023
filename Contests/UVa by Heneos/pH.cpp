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
    int t; cin>>t;
    int iterator=0;
    while(t--) {
        int l,w,h; cin>>l>>w>>h;

        bool flag = true;

        if(20<l) flag = false;
        if(20<w) flag = false;
        if(20<h) flag = false;
        iterator++;

        cout<<(flag?: "Case "<<iterator<<": good":"Case "<<iterator<<": bad")<<endl;

    }
    
    return 0;
}