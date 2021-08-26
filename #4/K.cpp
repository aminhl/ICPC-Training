#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n;
    while (n--){
        string s,t;
        cin >> s >> t;
        int mini = min(s.size(),t.size());
        for (int i = 0; i <mini ; ++i)
            cout << s[i] << t[i];
        int maxi = max(s.size(),t.size());
        if (maxi == s.size()){
            for (int i = mini; i <maxi ; ++i)
                cout << s[i];
        }
        if (maxi == t.size()){
            for (int i = mini; i <maxi ; ++i)
                cout << t[i];
        }
        cout << endl;
    }
}