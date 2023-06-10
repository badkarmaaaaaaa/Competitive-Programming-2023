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
    int n,x ; cin>>n>>x;

    long long a[n];
    long long xPrime=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        long long aux=a[i]*a[i];
        xPrime+=aux;
    }
    //cout<<xPrime<<endl;

    long double xPrimeDouble=(1.0*xPrime)/(1.0*n);

    //cout<<x<<" "<<xPrimeDouble<<endl;

    long double factor=sqrt((1.0*x))/(1.0*sqrt((1.0*xPrimeDouble)));
    //cout<<factor<<endl;

    for(int i=0; i<n; i++){
        cout<<fixed<<setprecision(10)<< 1.0*a[i]*factor<<" ";
    }
    
    return 0;
}