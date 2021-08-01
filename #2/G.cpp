#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x;
    for (int i = 0; i <n ; ++i) {
        long long fact=1;
        cin >> x;
        for (int j = 1; j <=x ; ++j) {
            fact *=j;
        }
        cout << fact << endl;
    }
}

