#include <iostream>
using namespace std;
#define N 10008

int array[N];

int lis(int array[], int n) {
    int *lis, i, j, maxLIS=0;
    lis=(int*) malloc (sizeof(int) * n);

    for(int i=0; i<n; i++) {
        lis[i]=1;
    }

    for(int i=1; i<n;i++) {
        for(int j=0; j<i; j++) {
            if(array[j]<array[i] && lis[i]<lis[j]+1) {
                lis[i]=lis[j]+1;
            }
        }
    }

    for(int i=0; i<n;i++) {
        maxLIS=max(lis[i],maxLIS);
    }

    free(lis);
 
    return maxLIS;
}

int main () {
    int n; cin>>n;
    for(int i=0; i<n;i++) {
        cin>>array[i];
    }

    cout<<lis(array,n)<<endl;

    return 0;
}