#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long int array[n];
    for (int i = 0; i < n; ++i){
        cin >> array[i];
        if (array[i]<=10)
            cout << "A[" << i << "] = "<< array[i] << endl;
    }
}