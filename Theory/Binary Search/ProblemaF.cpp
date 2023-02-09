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

int IndInf(vector<int> v, int a)
{
    int lo = 0, hi = v.size() - 1;
    while (lo <= hi) {
        int me = (lo + hi) / 2;
        if (v[me] >= a)
            hi = me - 1;
        else
            lo = me + 1;
    }
    return lo;
}

int IndSup(vector<int>&v, int b)
{
    int lo = 0, hi = v.size() - 1;
    while (lo <= hi) {
        int me = lo +  (hi-lo)/2;
        if (v[me] <= b)
            lo = me + 1;
        else
            hi = me - 1;
    }
    return hi;
}

int countInRange(vector<int> v, int a, int b)
{
    // initialize result
    int count = 0;
    count = IndSup(v,b) - IndInf(v,a) + 1;
    return count;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	vector<int> v; v.push_back(1);
	for(int i=1; i<80005;i++) {
		v.push_back(v[i-1]+countDivisors(v[i-1]));
	}
	printArray(v);

//	int n,a,b; cin>>a>>b;
//
//	cout<<"\n"<<countInRange(v,a,b);
	int t,i=1;
	cin>>t;
	while(t--) {
		int a,b;
		cin>>a>>b;
		cout<<"Case "<<i<<": "<<countInRange(v,a,b)<<"\n";
		++i;
	}
	return 0;
}