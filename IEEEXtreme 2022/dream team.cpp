#include <bits/stdc++.h>
using namespace std;
vector<int> p_prices;
vector<string> p_names;

void printArray(vector<int>&v) {
	for (auto x:v) {
		cout<<x<<" ";
	}
	cout<<"\n";}

int main() {
	int b; cin>>b;
	int p; cin>>p;
	string aux_names;
	int aux_prices;
	for(int i=0;i<p;i++){
		cin>>aux_names>>aux_prices;
		p_prices.push_back(aux_prices);
		p_names.push_back(aux_names);
	}
	printArray(p_prices);
	
	
	return 0;
}
	
	
	
	