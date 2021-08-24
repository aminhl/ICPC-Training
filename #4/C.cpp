#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,t;
    cin >> s >> t;
    if (strcmp(s.c_str(),t.c_str())==0 || strcmp(s.c_str(),t.c_str())<0)
        cout << s;
    if (strcmp(s.c_str(),t.c_str())>0)
        cout << t;
}