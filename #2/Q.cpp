#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--){
        int x;
        cin >> x;
        if (x==0)
            cout << x<< endl;
        while (x!=0){
            cout << x%10 << " ";
            x/=10;
            if (x==0)
                cout << endl;
        }
    }
}