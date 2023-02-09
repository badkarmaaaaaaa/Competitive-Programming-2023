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
#define N 5000

//     personas / peso 
int bool memo[105][10005];

// n:numero de personas.
// weight: array de pesos // value: weight
// 

void dp (int weight[], int position, int w, int c) {
    for(int i=0; i<n;i++) {
        for(int w=0; w<=MaxW;w++) {
            if(memo[i][w]) {
                memo[i+1][w]=true;
                memo[i+1][w+weight[i]]=true;
            }
        }
    }

}


int main () {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        int weight[n];
        for(int i=0; i<n;i++) {
            cin>>weight[i];
        }
    }
}