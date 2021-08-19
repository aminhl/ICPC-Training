#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    string s;
    cin >> s;
    bool flag = false;
    if (s[a] == '-'){
        for (int i = 0; i <a ; ++i) {
            if (s[i] - 48 >=0 && s[i]-48<=9)
                flag = true;
            else{
                flag = false;
                break;
            }
        }
        for (int i = a+1; i <a+b+1 ; ++i) {
            if (s[i]-48 >=0 && s[i]-48<=9)
                flag = true;
            else{
                flag = false;
                break;
            }
        }
    }
    if (flag)
        cout << "Yes";
    else
        cout << "No";
}