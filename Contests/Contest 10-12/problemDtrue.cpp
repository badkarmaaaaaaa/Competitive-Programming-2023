#include<bits/stdc++.h>
using namespace std;


int main() {
    int t; cin>>t;

    while(t--) {
        string str; cin>> str;
        int i=0,myCount=0,count=1;
        int a[100];
        int n=str.size();
        
        while(n--){
            char c=str[i];
            if(str[i+1]==c) {
                count++;
                i++;
            }
            else {
                i++;
                if(count%2==1) {
                    myCount++;
                }
                count=1;
            }
            
        }
        cout<<myCount<<endl;

    }

    return 0;
}