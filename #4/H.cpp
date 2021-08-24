#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--){
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i <s.size() ; ++i) {
            if ((s[i]=='0' && s[i+1]=='1' && s[i+2]=='0') || (s[i]=='1' && s[i+1]=='0' && s[i+2]=='1') )
                count++;
        }
        if (count>=1)
            cout << "Good" << endl;
        else
            cout << "Bad" << endl;
    }
}