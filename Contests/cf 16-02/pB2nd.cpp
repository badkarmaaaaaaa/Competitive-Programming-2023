#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n,k; cin>>n>>k;
        vector <int> leftPointers;
        vector <int> rightPointers;

        int auxArray[60] = {0};

        int countK=0;
        int countNoK=0;

        for(int i=0; i<n;i++) {
            int leftPointer; cin>>leftPointer;
            int rightPointer; cin>>rightPointer;

            if(leftPointer>k or rightPointer<k) {
                countNoK++;
            }
            else {
                leftPointers.push_back(leftPointer);
                rightPointers.push_back(rightPointer);
            }

        }

        if(countNoK == n) {
            cout<<"NO"<<endl;
        }
        else {
            for(int i=0; i<leftPointers.size();i++) {
                for(int j=leftPointers[i]; j<=rightPointers[i];j++) {
                    auxArray[j]++;
                }
            }

            int fK = auxArray[k];
            auxArray[k]=-1;
            bool flag = true;

            for(int i=0; i<60;i++) {
                if(auxArray[i]>=fK) {
                    flag=false;
                }
            }

            if(flag) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }


        
    }
    
    return 0;
}