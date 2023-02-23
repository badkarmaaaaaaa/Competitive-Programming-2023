// ROBOTS
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n,m; cin>>n>>m;
        char matrix[m][n];

        for(int j=0; j<n;j++) {
            string s; cin>>s;
            for(int i=0; i<m;i++) {
                matrix[i][j] = s[i];
            }
        }


        int minColumn=10, minRow=10;
        
        for(int j=0; j<n;j++) {
            for(int i=0; i<m;i++) {
                if(matrix[i][j]=='R' && i<minColumn) {
                    minColumn=i;
                }
            }
        }

        for(int i=0; i<m;i++ ) {
            for(int j=0; j<n;j++) {
                if(matrix[i][j]=='R' && j<minRow) {
                    minRow=j;
                }
            }
        }

        if(matrix[minColumn][minRow]=='R') cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    
    return 0;
}