#include <bits/stdc++.h>
using namespace std;

int main () {
    int t; cin>>t;
    while(t--) {
        int n;cin>>n;
        int matrix[n][n-1];
        for(int i=0; i<n;i++) {
            for(int j=0; j<n-1;j++) {
                int aux; cin>>aux;
                matrix[i][j]=aux;
            }
            //matrix[i][0]
        }
        int a[n+5]={0};
        for(int i=0; i<n;i++) {
            if(matrix[i][0]) a[matrix[i][0]]++;
        }
        int max=-1,maxNumber=0;
        for(int i=0; i<n;i++) {
            if(a[matrix[i][0]]>max)  {
                max=a[matrix[i][0]];
                maxNumber=matrix[i][0];
            }
        }

        int fEle=maxNumber;
        cout<<fEle<<" ";

        for(int j=0; j<n-1;j++) {
            for(int i=0; i<n;i++) {
                if(matrix[i][j]!=fEle) {
                    fEle=matrix[i][j]; 
                    break;
                }
            }
            cout<<fEle<<" ";
        }
        cout<<endl;


    }
    return 0;
}