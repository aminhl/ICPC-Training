#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,t;
    cin >> s >> t;
    cout << s.size() << " " << t.size() << endl;
    cout << s+t << endl;
    char c;
    c=s[0];
    s[0] = t[0];
    t[0] = c;
    cout << s << " " << t;
}