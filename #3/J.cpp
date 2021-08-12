#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i <n ; ++i)
        cin >> array[i];
    sort(array,array+n);
    int min = array[0];
    int occ = 0;
    for (int i = 0; i <n ; ++i) {
        if (array[i] == min)
            occ++;
    }
    if (occ%2!=0)
        cout << "Lucky";
    else
        cout << "Unlucky";

}