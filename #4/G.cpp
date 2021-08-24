#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.size();
    for (int i = 0; i <len ; ++i) {
        if (isupper(s[i]))
            s[i] += 32;
        else if (islower(s[i]))
            s[i] -= 32;
        if (s[i] == ',')
            s[i] = ' ';
    }
    cout << s;
}