#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,ans=0;
    cin >> n;
    int numDigs=0;
    while (n){
        int x = n%10;
        x++;
        if (x==10)
            x=0;
        ans *=10;
        ans +=x;
        n/=10;
        numDigs++;
    }
    while (ans){
        cout << ans%10;
        ans/=10;
        numDigs--;
    }
    while (numDigs--)
        cout << "0";
}