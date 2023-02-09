#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void printArray(vector<int>&v) {
	for (auto x:v) {
		cout<<x<<" ";
	}
	cout<<"\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	//Find first value >= x (x=4)
	vector<int> v = {2,3,5,6,8,10,12};
	int lo=0, hi=v.size()-1, x=7;
//	while(lo<hi){
//		int me=lo+(hi-lo)/2;
//		if(x<=v[me]) {
//			hi=me;
//		}     
//		else {
//			lo=me+1;
//		}
//	}
//	
//	cout<<lo<<" "<<hi<<" "<<v[lo];
	
	int ans=-1,me;
	while(lo<=hi) {
		me=lo+(hi-lo)/2;
		if(x<=v[me]) {
			ans=v[me];
			hi=me-1;
		}
		else {
			lo=me+1;
		}
	}
	cout<<ans<<" "<<me;

}