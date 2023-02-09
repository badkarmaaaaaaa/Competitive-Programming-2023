#include<bits/stdc++.h>
using namespace std;
#define MAX 100
int pairCount(int array[], int length, int k)
{
    // Initialize count
    int count = 0;

    // Declare hashmap
    bool hashmap[MAX] = { false };
    int hashmapTimes[MAX]= {0};

    // Insert array elements to hashmap
    for (int i = 0; i < length; i++) {
        hashmap[array[i]] = true;
        hashmapTimes[array[i]]=hashmapTimes[array[i]]+1;
    }

    for(int i=0;i<length;i++) {
        cout<<array[i]<<" "<<hashmapTimes[array[i]]<<endl;
    }

    

    for (int i = 0; i < length; i++) {
        int element = array[i];
        if (element - k >= 0 && hashmap[element - k])
            count=count+hashmapTimes[array[i]];
            hashmapTimes[array[i]]=0;
        if (element + k < MAX && hashmap[element + k])
            count=count+hashmapTimes[array[i]];
            hashmapTimes[array[i]]=0;
        //hashmap[element] = false;
    }
    return count;
}

int main() {
    int t; cin>>t;
 
    while(t--) {
        int n; cin>>n;
        int a[n];
 
        for(int i=0; i<n;i++) {
            int aux; cin>>aux;
            a[i]=aux;
        }

        sort(a,a+n);
        int maxVal=a[n-1];
        int minVal=a[0];
        int maxDiff=abs(maxVal-minVal);

        cout<< 2*pairCount(a, n, maxDiff)<<endl;
 

 
    }
    return 0;
    }
 