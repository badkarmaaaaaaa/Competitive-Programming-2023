#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        long long k; cin>>k;
        int a[n]={0}, b[n]={0}; // cifras

        int mpA[12]={0}, mpB[12]={0};
        
        int prevDigits;
        
        bool Possible = true;

        for(int i=0; i<n;i++) {
            string s; cin>>s;
            int digits = s.size();
            a[i]=digits;

            for(auto it:x) {
                
            }


            for(int j=0; j<s.size();j++) {
                int cifra = s[j]-'0';
                mpA[cifra]++;
            }
        }

        for(int i = 0; i < n; i++) {
            string s; cin>>s;
            int digits = s.size();
            b[i] = digits;

            for(int j = 0; j < s.size(); j++) {
                int cifra = s[j]-'0';
                mpB[cifra]++;
            }
        }

        for(int i=0; i<n;i++) {
            if(a[i]!=b[i]) Possible=false;
        }

        if (Possible) {
            long long sum=0;
            for(int i=0; i<=9;i++) {
                sum+=abs(mpA[i]-mpB[i]);
            }

            if(sum/2 <= k) {
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }


    }
    
    return 0;
}