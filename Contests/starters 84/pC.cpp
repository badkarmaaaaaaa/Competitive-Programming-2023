#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n,k; cin>>n>>k;

        string s; cin>>s;

        if(s[0]=='1') {
            for(int i=0; i<k;i++) {
                s=s+'0';
            }
        }
        else {
            for(int i=0; i<k-1;i++) {
                s=s+'0';
            }
            s[0]='1';
        }

        cout<<s<<endl;
    }
    
    return 0;
}