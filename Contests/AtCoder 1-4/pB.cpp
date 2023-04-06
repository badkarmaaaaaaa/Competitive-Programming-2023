#include<bits/stdc++.h>
using namespace std;

int main() {

    int r,c;

    for(int j=0; j<8;j++) {
        string s; cin>>s;
        for(int i=0; i<8;i++) {
            if (s[i]=='*') {
                c=i+1;
                r=j+1;
                break;
            }
        }
    }


    //97-104
    char ans=c+96;
    cout<<ans<<9-r<<endl;

    
    return 0;
}