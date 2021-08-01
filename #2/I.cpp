#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int rev=0;
    int dummy=n;
    while (dummy!=0){
        rev=rev*10+dummy%10;
        dummy/=10;
    }
    if (rev==n)
        cout <<rev << endl <<"YES";
    else
        cout <<rev <<endl <<"NO";
}

