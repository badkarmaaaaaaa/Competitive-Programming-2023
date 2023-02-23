#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n,m; cin>>n>>m;
        string s,t; cin>>s>>t;

        int maxVal = max(n,m);
        int minVal = min(n,m);
        
        bool IsBeatiful = true;
        int count=0;
        int countIt;

        for(int i=1; i<n;i++) {
            if(s[i]==s[i-1]) {
                IsBeatiful = false;
                count++;
                countIt=i;
            }
        }

        for(int k=1; k<m;k++) {
            if(t[k]==t[k-1]) {
                IsBeatiful = false;
                count++;
            }
        }

        if(IsBeatiful) {
            cout<<"YES"<<endl;
        }
        else {
            if(count<=1 && (t[m-1]!=s[n-1])) {
                cout<<"YES"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            } 
        }
    }
    
    return 0;
}