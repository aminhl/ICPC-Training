#include <bits/stdc++.h>
using namespace std;

int main(){
    short n;
    cin >> n;
    int k = 1;
    int sp = n-1;
    for (int i = 0; i <n ; ++i) {
        for (int j = sp; j >0 ; --j)
            cout << " ";
        sp--;
        for (int j = 1; j <=k ; ++j)
            cout << "*";
        k += 2;
        cout << endl;
    }
    k -= 2;
    sp = 1;
    for (int i = 0; i <n ; ++i) {
        for (int j = 1; j <sp ; ++j)
            cout << " ";
        sp++;
        for (int j = k; j > 0 ; --j)
            cout << "*";
        cout << endl;
        k -= 2;
    }
}