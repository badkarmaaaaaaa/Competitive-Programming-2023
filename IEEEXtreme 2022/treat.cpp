#include <bits/stdc++.h>
using namespace std;

void printArray(vector<string>&v) {
	for (auto x:v) {
		cout<<x<<" ";
	}
	cout<<"\n";}

int main() {
	int t; cin>>t;
	while(t--) {
		int m,s=0,maxvalue=0;cin>>m; map<string,int> mp;
		for(int i=0;i<m;i++) {
			string aux_p_paid;cin>>aux_p_paid;
			int hm_meals;cin>>hm_meals;
			mp[aux_p_paid]+=hm_meals;
			for(int i=0;i<hm_meals;i++) {
				string aux_p_ate;cin>>aux_p_ate;
				mp[aux_p_ate]-=1;
			}
		}
		for(auto it : mp) {
			if(it.second>0) s+=it.second;
			if(it.second>maxvalue) maxvalue=it.second;
		}
		cout<<s<<" "<<maxvalue<<endl;
	}
}