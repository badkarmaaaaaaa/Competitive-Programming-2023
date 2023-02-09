#include <bits/stdc++.h>
using namespace std;
long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
int main() {
    int n,m;cin>>n>>m;
    vector <long long> a (n);
    vector <long long> chamba (m,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end(),greater <long long> ());
    for(int i=0;i<n;i++){
        a[i]=binpow(2,a[i],1e9+7);
    }
    for(int i=0;i<n;i++){
        sort(chamba.begin(),chamba.end());
        chamba[0]+=a[i];
    }

    sort(chamba.begin(),chamba.end());
    for (int i=0;i<m;i++) {
    	cout<<chamba[i]<<" ";
	}
    chamba[m-1]%=(long long)(1e9+7);
    cout<<(chamba[m-1])<<endl;
    
    return 0;
};