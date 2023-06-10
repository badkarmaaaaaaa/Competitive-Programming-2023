#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n,k; cin>>n>>k;

        int matrix[n][n];

        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                cin>>matrix[j][i];
            }
        }

        int cnt=0;

            int matrix2[n][n];

        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                matrix2[j][i]=matrix[n-1-j][n-1-i];
            }
        }


        //  for(int i=0;i<n;i++) {
        //      for(int j=0;j<n;j++) {
        //          cout<<matrix2[j][i]<<" ";
        //      }
        //      cout<<endl;
        //  }

        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(matrix2[j][i]!=matrix[j][i]) cnt++;
            }
        }

        cnt=cnt/2;
        //cout<<cnt<<endl;

        if(cnt <= k && (k-cnt)%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }
    
    return 0;
}