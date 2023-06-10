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

int main(){
	int n=0;
	long double s=0;
	cin>>n;
	for(int i=0;i<n;i++){
		long double l=0;
		cin>>l;
		s+=l*l*l;
	}
	long double rpta=0;
	rpta=pow(s*1.0,(0.3333333333));
	cout<<fixed<<setprecision(7)<<rpta<<endl;
}