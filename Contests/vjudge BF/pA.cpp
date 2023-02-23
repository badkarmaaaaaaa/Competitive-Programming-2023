#include<bits/stdc++.h>
using namespace std;

int main() {
        int n,k; cin>>n>>k; int a[n];

        set <int> s;

        for(int i=0; i<n;i++) {
            cin>>a[i];
            s.insert(a[i]);
        }

        if(s.size()<k) {
            cout<<"NO"<<endl;
        }
        else {
            int count=0;
            cout<<"YES"<<endl;
            for(int i=0; i<n;i++) {
                if(a[i]!=-1) {
                        cout<<i+1<<" ";
                        count++;
                        
                        if(count==k)  break;
                        
                        for(int j=i;j<n;j++) {
                            if(a[j]==a[i]) {
                                a[j]==-1;
                            }
                        }
                }
                
            }
        }


    
    return 0;
}