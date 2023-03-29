#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        int a[n], b[n];

        for(int i=0;i<n;i++) {
            cin>>a[i];
        }

        for(int i=0; i<n;i++) {
            cin>>b[i];
        }

        bool flag = true;


        int RepBarray=0, RepAarray=0;
        bool flagRepBarray=true, flagRepAarray=true;
        for(int i=n-1;i>=0;i--) {
            if(b[i]==b[n-1] && flagRepBarray) {RepBarray++;}
            else {flagRepBarray=false;}


            if(a[i]==a[n-1] && flagRepAarray) {RepAarray++;}
            else {flagRepAarray = false;}
        }

        //cout<<RepAarray<<" "<<RepBarray<<endl;
        int minVal=max(RepAarray,RepBarray);
        for(int i=0; i<n-minVal;i++) {
            if(a[i]>b[n-1]) flag =false;
        }

        

        for(int i=0; i<n-minVal;i++) {
            if(b[i]>a[n-1]) flag =false;
        }


        for(int i=n-minVal;i<n;i++) {
            if(a[i]>a[n-1]) flag=false;
        }

        for(int i=n-minVal;i<n;i++) {
            if(b[i]>b[n-1]) flag=false;
        }

        

        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;


    }
    
    return 0;
}