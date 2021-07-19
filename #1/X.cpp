#include <bits/stdc++.h>
using namespace std;

int main(){
    long int l1,r1,l2,r2;
    cin >> l1 >> r1 >> l2 >> r2;
    int lx,rx;
    lx=max(l1,l2);
    rx=min(r1,r2);
    if (l2>r1 || l1>r2)
        cout <<"-1";
    else
        cout << lx << " " << rx;
}

