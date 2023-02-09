#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        long long k;cin>>k;
        k=abs(k);
        long long n=0,sum=0;
        while(sum<k){
            n++;
            sum+=n;   
        }
        long long diff=sum-k;
        if(k==0) {
            cout<<3<<endl;
            if(t) {
                cout<<endl;
            }
            continue;
        }

        if(diff%2==0) {
            cout<<n<<endl;
        }
        else {
            if(n%2==0) {
                cout<<n+1<<endl;
            }
            else {
                cout<<n+2<<endl;
            }
        }
        if(t) {
            cout<<endl;
        }

    }
    return 0;
}