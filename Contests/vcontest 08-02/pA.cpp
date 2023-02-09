#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        string s; cin>>s;
        char c; cin>>c;

        bool condition=false;
        int lenght = s.size();
        
        int left=0, right=0;

        for(int i=0; i<s.size();i++) {
            if(s[i]==c) {
                left=i;
                right=lenght-i-1;
                if(right%2==0 && left%2==0) {
                    condition=true;
                    break;
                }
            }
        }

        if(condition) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}