#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n;
    while (n--){
        string s,t;
        cin >> s >> t;
        if (s.size() > t.size()){
            for (int i = 0; i <t.size() ; ++i)
                cout << s[i] << t[i];
            for (int i = t.size(); i <s.size() ; ++i)
                cout << s[i];
            cout << endl;
        }
        if (s.size() < t.size()){
            for (int i = 0; i <s.size() ; ++i)
                cout << s[i] << t[i];
            for (int i = s.size(); i <t.size() ; ++i)
                cout << t[i];
            cout << endl;
        }
        if (s.size() == t.size()){
            for (int i = 0; i <t.size() ; ++i)
                cout << s[i]<<t[i];
            cout << endl;
        }
    }
}