#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        string s; cin>>s;
        int countOne=0, countZero=0;

        for(int i=0; i<n;i++) {
            if(s[i]==1) countOne++;
            else countZero++;
        }

        if(countOne == n/2 or countZero == n/2) {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    
    return 0;
}