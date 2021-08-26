#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string t = s;
    reverse(s.begin(),s.end());
    if (s==t)
        cout <<"YES";
    else
        cout << "NO";
}