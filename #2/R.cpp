#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    while (1){
        cin >> n >> m;
        if (n<=0 || m<=0)
            break;
        int max = std::max(n,m);
        int min = std::min(n,m);
        int sum=0;
        for (int j = min; j <=max ; ++j) {
            cout << j << " ";
            sum += j;
            if (j==max)
                cout << "sum =" << sum << endl;
        }
    }
}