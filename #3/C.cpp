#include <bits/stdc++.h>
using namespace std;

int main() {
    long int n;
    cin >> n;
    long int array[n];
    for (int i = 0; i < n; ++i){
        cin >> array[i];
        if (array[i]>0)
            array[i] = 1;
        if (array[i]<0)
            array[i] = 2;
    }
    for (int i = 0; i <n ; ++i)
        cout << array[i] << " ";
}