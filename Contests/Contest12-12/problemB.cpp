#include<bits/stdc++.h>
using namespace std;


int main() {
    int t; cin>>t;
 
    while(t--) {
        set <string> s;
        int n;cin>>n;
        int count=0;
        int auxCount=0;
        string str; cin>>str;
        if(n==1) {
            cout<<"NO"<<endl;
            continue;
        }

        for(int i=0;i<n;i++) {
            if(s.find(str.substr(i, 2))!=s.end()) {
                if(str.substr(i, 2)==str.substr(i-1, 2)) {
                    auxCount++;
                    if(auxCount>=2) {
                    count++;
                    cout<<"YES"<<endl;
                    break;
                }
                }
                else
                {count++;
                cout<<"YES"<<endl;
                break;}
            }
            else {
                s.insert(str.substr(i, 2));
            }
        }
        if(count==0) {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
 