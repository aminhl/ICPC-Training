#include <bits/stdc++.h>
using namespace std;

int main() {
    long int n;
    cin >> n;
    long int array[n];
    for (int i = 0; i <n ; ++i)
        cin >> array[i];
    long int search;
    bool found = false;
    cin >> search;
    for (int i = 0; i <n ; ++i){
        if (array[i]==search){
            cout << i;
            found = true;
            break;
        }
    }
    if (!found)
        cout << "-1";
}