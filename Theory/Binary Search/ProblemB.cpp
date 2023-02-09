#include<bits/stdc++.h>
#define ll long long int
#define tol 1e-9
using namespace std;
int a[1005],n,l;

void printArray(vector<int>&v) {
	for (auto x:v) {
		cout<<x<<" ";
	}
	cout<<"\n";
}

bool test(double me) {
	if(((a[0]-0)>me) or ((l-a[n-1]>me))) {
		return 0;
	}
	
	for(int i=1;i<n; i++) {
		if(a[i]-a[i-1]>2*me) {
			return 0;
		}
	}
	return 1;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin>>n>>l;
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	
	sort(a,a+n);
	
	double lo=0,hi=1000000008,me;
	
	for (int _=0; _<100;_++) {
		me =(hi+lo)/2;
		if(test(me)) {
			hi=me;
		}
		else {
			lo=me;
		}
	}
	
	printf("%.9lf\n",me);
			
	return 0;
}