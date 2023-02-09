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
    while(t--) {
        int n,m; cin>>n>>m;
        int prefMeal[n]={0};
        int maxMeal=-1, maxMealType;
        for(int i=0; i<n;i++) {
            int aux; cin>>aux;
            prefMeal[aux]=prefMeal[aux]+1;
            if(maxMeal<=prefMeal[aux]) {
                maxMeal=prefMeal[aux];
                maxMealType=aux;
            }
        }

        int tableCapacity[m];
        for(int i=0; i<m;i++) {
            cin>>tableCapacity[i];
        }

        if(m==1) {
            cout<<1<<endl;
            continue;
        }

        for(int i=0; i<n;i++) {
            if(maxMealType>)
        }
        
    }
}