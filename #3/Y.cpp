#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,q;
    cin >> n >> q;
    long long arr[n];
    for (int i = 0; i <n ; ++i)
        cin >> arr[i];
    long long s[n] = {0};
    long long int sum = 0;
    for (int i = 0; i <n ; ++i)
        s[i] += (i==0) ? arr[i] : arr[i] + s[i-1];
    while (q--){
        int l,r;
        cin >> l >> r;
        if (l == 1)
            cout << s[r-1] << endl;
        else
            cout << s[r-1]- s[l-2] << endl ;
    }
}