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
    int n; cin>>n;

    char input[4*n][5];

    for(int j=0; j<5;j++) {
        for(int i=0; i<4*n;i++) {
            cin>>input[i][j];
        }
    }

    vector <int> v;

    for(int i=0; i<4*n;i=i+4) {
            if(input[i][3]=='*') v.push_back(2);
            if(input[i+1][3]=='*') v.push_back(1);
            if(input[i+2][3]=='*') v.push_back(3);
        }

    for(int i=0; i< v.size();i++){
        cout<<v[i];
    }
    cout<<endl; 
    
    
    return 0;
}