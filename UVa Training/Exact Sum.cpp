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
    int n;
    bool first=1; 
    while(cin>>n) {
    
    if(first) {
        first=false;
    }
    else {
        cout<<endl;
    }
    set <int> s;
    int sum;
    vi v;
    int iAns, jAns;
    int tmp=INT_MAX;

    for(int i=0; i<n;i++) {
        int aux; cin>> aux;
        v.pb(aux);
    }
    cin>> sum;

    for(int i = 0; i < n; i++) {
        if(s.find(sum - v[i]) != s.end() && tmp>abs(sum - v[i] - v[i])) {
            iAns = sum - v[i]; jAns=v[i];
            tmp= abs(iAns-jAns);
        }
        s.insert(v[i]);
    }
    if(iAns > jAns) {
        swap(iAns,jAns);
    }
    cout<<"Peter should buy books whose prices are "<<iAns<<" and "<<jAns<<"."<<endl;
    }

    return 0;
}