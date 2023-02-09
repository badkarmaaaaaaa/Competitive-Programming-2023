#include <bits/stdc++.h>
using namespace std;

bool isvalid(multiset<int>&st, int t,int a) {
	st.insert(a);
	bool res = 0;
	if(st.size() < 2) res = true;
	else res = *(--st.end()) - *(st.begin()) <=t;
	st.erase(st.find(a));
	return res;
}

int main() {
	int m,n,t; cin>>m>>n>>t;
	int a[m][n];
	
	for(int i=0;i<m;i++) {
		for(int j=0; j<n;j++) {
			cin>>a[i][j];		
		}
	}

	
	int res = 0;
	multiset<int> st;
	for(int l=0,r=0;l<n;l++) {
		while(r<n && isvalid(st,t,a[0][r])) {
			st.insert(a[0][r]); r++;
//			cout<<l<<" "<<r<<endl;
//			cout<<"max:"<<*(--st.end())<<" min: "<<*(st.begin())<<endl;
		}
		res=max(res,r-l);
		st.erase(st.find(a[0][l]));
	}
	cout<<res<<endl;
	
	return 0;
}
