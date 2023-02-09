#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int arrayf91[1000007] ={0};
int f91(int n) {
	if(arrayf91[n]!=0) return arrayf91[n];
	if(n>100) {
		return arrayf91[n]=n-10;
		
	}
	else {
		return f91(f91(n+11));
	}
}

vector<int> v; int tem;
int main() {
	f91(1000000);
	while(true) {
		cin>>tem;
		if (tem==0) break;
		v.push_back(tem);
	}
	
	int k = v.size();
	for(int i=0;i<k;i++) {

		printf("f91(%d) = %d\n",v[i],f91(v[i]));
	}
	

}