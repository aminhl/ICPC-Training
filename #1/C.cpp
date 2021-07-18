#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y ;
    char c;
    cin >> c;
    switch (c) {
        case '+':
            cout << x << " " << c << " " << y << " = " << x+y;
            break;
        case '-':
            cout << x << " " << c << " " << y << " = " << x-y;
            break;
        case '*':
            cout << x << " " << c << " " << y << " = " << x*y;
            break;
    }

}