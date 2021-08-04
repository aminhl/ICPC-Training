#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int last = 1;
    for(int j=0 ; j<n; j++)
    {
        int i = last;
        for(;i<=last+2;i++)
        {
            cout<<i<<" ";
        }
        last = i;
        last++;
        cout << "PUM" << endl;
    }
}