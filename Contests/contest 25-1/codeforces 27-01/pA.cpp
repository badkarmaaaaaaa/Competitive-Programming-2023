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


int main () {
    int t; cin>>t;
    string pi="314159265358979323846264338327";
    while(t--) {
        string s;
        cin>>s;
        int count=0;
        for(int i=0; i<s.size();i++) {
            if(s[i]==pi[i]) {
                count++;
            }
            else {
                break;
            }
        }
        cout<<count<<endl;

    }
    return 0;
}