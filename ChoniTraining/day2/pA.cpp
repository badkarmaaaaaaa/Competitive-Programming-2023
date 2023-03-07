// A Palindromic Indices 9:01 -9:25
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        string s; cin>>s;
        int count=0;

        for(int i=n/2; i>=0;i--) {
            if(s[i]==s[n/2]) count++;
            else break;
        }

        for(int i=n/2+1; i<n;i++) {
            if(s[i]==s[n/2]) count++;
            else break;
        }
        cout<<count<<endl;
    }
    
    return 0;
}