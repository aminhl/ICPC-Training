#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long int array[n];
    for (int i = 0; i <n ; ++i)
        cin >> array[i];
    bool flag = false;
    int last = n-1;
    for (int i = 0; i <n ; ++i) {
        if (array[i]==array[last])
            flag = true;
        else{
            flag = false;
            break;
        }
        last--;
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";
}