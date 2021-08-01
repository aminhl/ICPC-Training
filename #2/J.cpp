#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, isPrime;
    cin >> n;
    for(int i=2; i<=n; i++)
    {
        isPrime = 1;
        for(int j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                isPrime = 0;
                break;
            }
        }
        if(isPrime==1)
            cout << i << " ";
    }
}