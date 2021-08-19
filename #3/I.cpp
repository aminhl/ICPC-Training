#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    while (x--){
        int n;
        cin >> n;
        int arr[n];
        for (int i = 1; i <=n ; ++i)
            cin >> arr[i];
        int mini = INT_MAX;
        for (int i = 1; i <=n ; ++i) {
            for (int j = i+1; j <=n ; ++j)
                mini = min(mini,arr[i]+arr[j]+j-i);
        }
        cout << mini << endl;
    }
}