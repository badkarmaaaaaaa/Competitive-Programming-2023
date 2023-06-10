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
    int n,x; cin>>n>>x;
    int a[n];
    set <int> s;

    for(int i=0; i<n;i++) {
        int aux; cin>>aux;
        a[i]=aux;
        s.insert(aux-x);
    }
    
    bool flag = false;
    //cout<< flag<<endl;
    for(int i=0; i<n;i++) {
        if(s.find(a[i])!=s.end()) flag =true;
    }

    //cout<< flag<<endl;
    cout<< (flag? "Yes":"No")<<endl;

    
    return 0;
}