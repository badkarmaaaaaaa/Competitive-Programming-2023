#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	char arr[20];
	cin>>arr;
	ll digits = strlen(arr);
	ll ans=0;
	ans=(1<<digits)-2;
	
	for (ll i = digits-1, count=0; i>=0; i--, count++) {
		if(arr[i]=='7') {
			ans += (1<<count);
		}
	}
	
	cout<< (ans+1) << "\n";
	return 0;
}