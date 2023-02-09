#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    int a[n];
    int count=1;
    int maxCount=1;

    for(int i=0; i<n;i++) {
        cin>>a[i];
    }

    for(int i=1; i<n;i++) {
        if(a[i-1]<a[i]) {
            count++;
        }
        else {
            maxCount=max(count, maxCount);
            count=1;
        }
    }
    maxCount=max(count, maxCount);

    

    cout<<maxCount;


    return 0;

}