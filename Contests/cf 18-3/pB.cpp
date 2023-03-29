#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; int a[n];
        set <int> s;
        vector <int> v;


        for(int i=0; i<n;i++) {
            cin>>a[i];
            s.insert(a[i]);
        }

        
        sort(a,a+n);
        int minVal=a[0];
        int secMinVal=a[0];

        for(int i=0; i<n;i++) {
            if(a[i]>minVal) {
                secMinVal=a[i]; break;
            }
        }

        int ans;

        if((n%2==0 && a[n/2]==a[0]) or (n%2==1 && a[(n+1)/2]==a[0])) {
            if(s.size()>=3) {
                ans=secMinVal;
                if(a[0]!=0) ans=0;
                
                if(s.find(minVal+1) == s.end()) ans = min(minVal+1,ans);
            }
            else {
                ans=minVal+secMinVal+1;
                if(s.find(minVal+1) == s.end()) ans = min(minVal+1,ans);
            }
        }
        else {
            ans=minVal;
        }

        cout<<ans<<endl;





    }
    
    return 0;
}