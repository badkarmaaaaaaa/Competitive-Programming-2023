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
    FIFO;
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n;i++) {
            cin>>a[i];
        }
        string s; cin>>s;

        bool noFlag=true;
        for(int i=0; i<n;i++) {
            for(int j=0;j<n;j++) {
                if(a[i]==a[j] && s[i]!=s[j]) {
                    noFlag=false;
                }
            }
        }

        if(noFlag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}