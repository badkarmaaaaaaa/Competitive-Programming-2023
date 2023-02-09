#include<bits/stdc++.h>
#define ll long long int
#define tol 1e-7
using namespace std;
int n, k;
double a[10105], me;

void printArray(vector<int>&v) {
	for (auto x:v) {
		cout<<x<<" ";
	}
	cout<<"\n";
}

bool test(double me) {
	double sum1=0, sum2=0;
	
	for(int i=0; i<=n-1;i++) {
		double x = a[i]-me;
		if(a[i]<me) {
			sum1 = sum1 - (x)/(1.0-k/100.0);
		}
		else {
			sum2 += x;
		}
	}
	
	if(sum1>sum2) return 0;
	else return 1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin>>n;cin>>k;
	
	for(int i=0; i<=n-1;i++) {
		cin>>a[i];
	}
	sort(a,a+n);
	double lo=a[0], hi=a[n-1];
	
	double me=(hi+lo)/2.0;
	while((hi-lo)>tol) {
		me =(hi+lo)/2.0;
		if(test(me)) {
			lo=me;
		}
		else {
			hi=me;
		}
	}
	
	printf("%.10lf\n",me);
	

	return 0;
}