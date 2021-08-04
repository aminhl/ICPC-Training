#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--){
        int a,b;
        cin >> a >> b;
        long int sum=0;
        if(a>b)
            swap(a,b);
        for (int i = a+1; i <b ; ++i) {
            if (i%2!=0)
                sum += i;
        }
        cout << sum << endl;
    }
}