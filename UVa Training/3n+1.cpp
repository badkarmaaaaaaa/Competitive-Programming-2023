#include <bits/stdc++.h>
using namespace std;
#define N 100010

int a[N];
vector <int> v;

int main() {
	for(int i=1; i<=10020;i++) {
		int n=i;
		int iterator=0;
		while(true) {
			iterator++;
			if(n==1) {a[i]=iterator;break;}
			if(n%2==1) n=3*n+1;
			else n=n/2;
		}
	}
	
	int aInput,bInput;
	while(cin>>aInput>>bInput) {
        cout<<aInput<<" "<<bInput<<" ";
		int ans=-1;
        if(aInput>bInput) {
            swap(aInput,bInput);
        }
		for(int i=aInput; i<=bInput;i++) {
			ans=max(ans,a[i]);
		}
		
		cout<<ans<<"\n";
	}
	return 0;
}
