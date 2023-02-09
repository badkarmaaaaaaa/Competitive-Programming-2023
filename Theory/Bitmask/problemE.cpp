#include<bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("output.txt", "w", stdout);
#endif
    int arr[] = {120, 120, 120};
    int q[] = {0,360};

    bitset<1000> b;
    b[0] = 1;
    for (int i = 0; i < 3; i++) {
        b=b|(b << arr[i]);
        cout << b << '\n';
    }
    for (int i = 0; i < 2; i++) {
        cout << q[i] << "-> ";
        if (b[q[i]])
            cout << "Subset sum exists\n";
        else
            cout << "Subset sum doesn't exist\n";
    }
    return 0;
}