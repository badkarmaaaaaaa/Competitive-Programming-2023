#include<bits/stdc++.h>
using namespace std;


int main() {
    int t; cin>>t;
 
    while(t--) {
        int n; cin>>n;
        if(n<=9) {
            cout<<n<<endl;
            continue;
        }

        int countTen=0;
        while(n>=10) {
            n=n/10;
            countTen++;
        }

        cout<<9*countTen+n<<endl;

    }
    return 0;
    }
 