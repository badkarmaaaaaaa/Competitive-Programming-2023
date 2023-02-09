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
	
	//Binary search: For sorted arrays / O(log(n))
	//method 1
	int a = 0, b = n-1;
	while (a <= b) {
		int k = (a+b)/2; //Discutir el tema del termino medio
		if (array[k] == x) {
		// x found at index k
		}
		if (array[k] > x) b = k-1;
		else a = k+1;
	}

	//method 2

	int k = 0;
	for (int b = n/2; b >= 1; b /= 2) {
		while (k+b < n && array[k+b] <= x) k += b;
	}
	if (array[k] == x) {
	// x found at index k
	}

	return 0;
}