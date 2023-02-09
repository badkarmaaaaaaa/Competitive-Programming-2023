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
#define N 1000

int memo[N];
int dp(int &matrix, int c) {
    if(c)


}


int main() {
    int n; cin>>n;
    int matrix[3][n];
    for(int i=0; i<3;i++) {
        for(int j=0; j<n;j++) {
            cin>>matrix[i][j];
        }
    }
    cout<<dp(matrix,n-1)<<endl;

}