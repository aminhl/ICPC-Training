#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int nbdigs=0,temp=n;
    int rev=0;
    while(n){
        rev = rev*10+n%10;
        n/=10;
        nbdigs++;
    }
    n=temp;
    int len = ceil(nbdigs/2.00);
    while (len--){
        cout << n%10+rev%10 <<endl;
        n/=10;
        rev /=10;
    }
}