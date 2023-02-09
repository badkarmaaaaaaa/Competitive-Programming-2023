#include<iostream>
#include<vector>
#include <algorithm>
#define ll long long int
using namespace std;
int n;
ll med,indx;
vector <int> b;



bool test(ll me) {
	if(b[indx+1] <= me) {
		return 0;
	}
	else {
		return 1;
	}
}




int main() {
	
	while(cin>>n) {
		int a[100005]; b.clear();
		for(int i=0;i<n;i++) {
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=n-1;i>=1;i--) {
			for(int j=i-1;j>=0;j--) {
				int diff = abs(a[i]-a[j]);
				b.push_back(diff);
			}
		}
		sort(b.begin(),b.end());
		indx = b.size()/2;
		
		
		ll lo=0,hi=1e9+10,me=0;
		while(lo<hi) {
			me = lo + (hi-lo+1)/2;
			if(test(me)) {
				lo=me;
			}
			else {
				hi=me-1;
			}
		}
			
		cout<<lo<<endl;
	}
}