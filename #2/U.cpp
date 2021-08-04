#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a,b;
    cin >> n >> a >> b;
    long int sum=0;
    for (int i = 1; i <=n ; ++i) {
        int x=i;
        int digs=0;
        while (x!=0){
            digs += x%10;
            x/=10;
        }
        if (digs>=a && digs<=b){
            sum += i;
        }
    }
    cout << sum;
}