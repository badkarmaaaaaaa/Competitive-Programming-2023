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
        int n,q; cin>>n>>q;

        int a[n],evenCount=0;
        ll aSum=0;
        for(int i=0; i<n;i++) {
            cin>>a[i];
            if(a[i]%2==0) evenCount++;
            aSum=aSum+a[i];
        }
        
        int oddCount=n-evenCount;

        
        for(int k=0; k<q;k++) {
            ll AuxSum=0;
            int auxInd,auxNum; cin>>auxInd>>auxNum;
            if(auxInd==0) { //Numeros Pares
                AuxSum=AuxSum+evenCount*auxNum;
                if(auxNum%2==1) {
                    evenCount=0;
                    oddCount=n;
                }
            }
            else { //Numeros Impares
                AuxSum=AuxSum+oddCount*auxNum;
                if(auxNum%2==1) {
                    oddCount=0;
                    evenCount=n;
                }
            }
            aSum=aSum+AuxSum;
            cout<<aSum<<endl;
        }

    }
    return 0;
}