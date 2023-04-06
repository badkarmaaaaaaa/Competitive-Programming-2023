#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        string s; cin>>s;

        bool flag =false;
        int currIndx=-1;

        int first = s[0];
        int firstIndx=1;

        for(int i=1; i<n;i++) {
            if(s[i]==first) firstIndx++;
        }

        for(int i=firstIndx; i<n;i++) {
            int current = s[i];
            if(current<=first) {
                first=current;
                currIndx=i;
            }
        }

        if(currIndx!=-1) {
            cout<<s[currIndx];
            for(int i=0; i<currIndx;i++) {
                cout<<s[i];
            }
            for(int i=currIndx+1; i<n;i++) {
                cout<<s[i];
            }
            cout<<endl;

        }
        else {
            for(int i=0; i<n;i++) {
                cout<<s[i];
            }
            cout<<endl;
        }
    }
    
    return 0;
}