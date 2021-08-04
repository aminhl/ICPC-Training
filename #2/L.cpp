#include <bits/stdc++.h>
using namespace std;

int main() {
    int m,n,t;
    cin >> m >> n;
    while (n!=0){
        t=m%n;
        m=n;
        n=t;
    }
    cout << m;
}