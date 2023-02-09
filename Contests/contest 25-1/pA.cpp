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
        int n; cin>>n;
        int countEven=0, countOdd=0;
        int a[n];
        for(int i=0; i<n;i++) {
            int aux; cin>>aux;
            aux=aux%2;
            if(aux==0) countEven++;
            else countOdd++;
            a[i]=aux;
        }

        if((countEven>=2 && countOdd>=1)) {
            cout<<"YES"<<endl;
            int count=0;
            for(int i=0; i<n;i++) {
                if(count==2) break;
                if(a[i]==0) {
                    cout<<i+1<<" ";
                    count++;
                }
            }
            count=0;
            for(int i=0; i<n;i++) {
                if(count==1) break;
                if(a[i]==1) {
                    cout<<i+1<<" ";
                    count++;
                }
            }
            cout<<endl;
            continue;
        }

        if(countOdd>=3) {
            cout<<"YES"<<endl;
            int count=0;
            for(int i=0; i<n;i++) {
                if(count==3) break;
                if(a[i]==1) {
                    cout<<i+1<<" ";
                    count++;
                }
            }
            cout<<endl;
            continue;
        }

        cout<<"NO"<<endl;
    }
    return 0;
}