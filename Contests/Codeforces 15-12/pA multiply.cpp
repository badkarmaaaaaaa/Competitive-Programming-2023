#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long

#define MAX 500

int multiply(int n, int num[], int num_size) {
    int carry=0;
    for(int i=0; i<num_size;i++) {
        int prod =num[i]*n+carry;
    
        num[i] = prod % 10;
        carry = prod/10;
    }

    while (carry) {
        num[num_size] = carry % 10;
        carry = carry / 10;
        num_size++;
    }
    return num_size;
}

void factorial(int n)
{
    int num[MAX];
 
    num[0] = 1;
    int num_size = 1;

    for (int x = 2; x <= n; x++)
        num_size = multiply(x, num, num_size);
 
    for (int i = num_size - 1; i >= 0; i--)
        cout << num[i];
}


int main() {
    int t; cin>>t;

    while(t--) {
        int n; cin>>n;
        factorial(n);
        cout<<endl;
        
    }
    return 0;
}

