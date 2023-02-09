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
	int n;
	cin>>n;
	vector<int>v;
	while(n>0) {
		int x; cin>>x;
		v.push_back(x);
		n--;
	}
	
	printArray(v);

	return 0;
}