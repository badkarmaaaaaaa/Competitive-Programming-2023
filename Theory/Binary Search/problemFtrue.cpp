#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void printArray(vector<int>&v) {
	for (auto x:v) {
		cout<<x<<" ";
	}
	cout<<"\n";
}

int countDivisors(int n)
{
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i)
                cnt++;
            else 
                cnt = cnt + 2;
        }
    }
    return cnt;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	vector<int> v; v.push_back(1);
	for(int i=1; i<10000;i++) {
		v.push_back(v[i-1]+countDivisors(v[i-1]));
	}
	//printArray(v);

	int lo=0, hi=v.size()-1;
	int a,b,me; cin>>a>>b;
	
	//a: Hallar el strictly mayor a "a" y el strictly menor a "b"
	
	while(lo<=hi) {
		me=lo+(hi-lo)/2;
		if(a<=v[me]) {
			hi=me-1;
		}
		else {
			lo=me+1;
		}
	}
	int aux1=me;
	
	lo=0; hi=v.size()-1; int me2=0;
	while(lo<=hi) {
		me2=lo+(hi-lo+1)/2;
		if(b<v[me2]) {
			hi=me2-1;
		}
		else {
			lo=me2+1;
		}
	}
	int aux2=me2-1;
	int aux3=aux2-aux1+1;
	cout<<aux3;
	
	return 0;
}