#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        long long n; cin>>n;
        int count=0;
        bool divFlag=false;

    

        while(n%5==0) {
            n=4*n/5;
            divFlag=true;
            count++;
        }

        while(n%3==0) {
            n=2*n/3;
            divFlag=true;
            count++;
        }

        while(n%2==0) {
            n=n/2;
            divFlag=true;
            count++;
        }
        if(n%2!=0 && n%5!=0 && n%3!=0 && n!=1) {
            cout<<"-1"<<endl;
            continue;
        }

        if(n==1) {
            cout<<count<<endl;
            continue;
        }
    }
    return 0;

}