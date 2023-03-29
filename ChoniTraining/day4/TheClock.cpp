#include<bits/stdc++.h>
using namespace std;




int main() {
    int t; cin>>t;
    while(t--) {
        string s; cin>>s;
        int x; cin>>x;

        int hour=(s[0]-48)*10+s[1]-48, minute=(s[3]-48)*10+s[4]-48;

        //cout<< hour << " "<< minute<< endl;

        int countPalindrome=0;

        for(int i=0; i<(1440*x)/(__gcd(1440,x))/x;i++) {
            minute = (minute + x);
            if(minute>=60) {
                hour += minute/60;
                minute = minute%60;
            }

            hour = hour%24;

            //cout<< hour << " " << minute <<endl;

            if(hour/10 == minute %10 && hour%10==minute/10) countPalindrome++;

            
        }
        

        cout<<countPalindrome<<endl;
    }
    
    return 0;
}