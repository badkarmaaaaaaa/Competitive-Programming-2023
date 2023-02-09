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
 
 
int gcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}
 
int main () {
    FIFO;
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        int a[n];
 
        for(int i=0; i<n;i++) {
            cin>>a[i];
        }
 
        int maxGCD=1,maxGCDIndx;
        for(int i=0; i<n-1;i++) {
            int gcdAux;
            gcdAux=gcd(a[i],a[i+1]);
            if(maxGCD<gcdAux) {
                maxGCD=gcdAux;
                maxGCDIndx=i;
            }
 
        }
 
        int maxLenght=-1;
        for(int i=0; i<n;i++) {
            if(a[i]%maxGCD==0) {
                int count=1,iterator=1;
                while(i+iterator<=n-1) {
                    if(a[i+iterator]%maxGCD==0) {
                        count++;
                        iterator++;
                    }
                    else break;
                }
                maxLenght=max(maxLenght,count);
            }
            i=i+maxLenght-2;
        }
 
        cout<<maxGCD<<" "<<maxLenght<<endl;
    }
    return 0;
}