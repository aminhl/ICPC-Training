#include <bits/stdc++.h>
using namespace std;

int main() {
    int number1, number2, next = 0, divide;
    bool isLucky = false, stop = true;
    cin >> number1 >> number2;;
    for (int i = number1; i <= number2; i++) {
        divide = i;
        while (divide > 0) {
            next = divide % 10;
            divide /= 10;
            if (next == 7 || next == 4) {
                isLucky = true;
                if (divide == 0) {
                    stop = false;
                    cout << i << " ";
                }
            }
            else {
                isLucky = false;
                break;
            }
        }
    }
    if (isLucky == false && stop == true) {
        cout << -1;
    }
}