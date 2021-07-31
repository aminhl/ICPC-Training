#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << setfill('0') << setw(2)<< (a%100*b%100)%100 * (c%100*d%100)%100;
}