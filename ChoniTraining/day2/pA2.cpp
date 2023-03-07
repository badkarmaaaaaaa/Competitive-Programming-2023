// A DIGIT MINIMIZATION 9:52-10:07
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        string s; cin>>s;

        int minCifra=20;
        if(s.size()==2) cout<<s[1]<<endl;
        else {
            for(int i=0; i<s.size();i++) {
                if(s[i]-48<minCifra) minCifra=s[i]-48;
            }
            cout<<minCifra<<endl;
        }
    }
    
    return 0;
}