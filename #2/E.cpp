#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int number;
    int max=0;
    for (int i = 0; i <n ; ++i) {
        cin >> number;
        if (number>=max){
            max=number;
        }
    }
    cout << max;
}