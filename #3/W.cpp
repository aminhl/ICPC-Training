#include <bits/stdc++.h>
using namespace std;

int main() {
    int m,n;
    cin >> m >> n;
    long int arr[m][n];
    long int temp[m][n];
    for (int i = 0; i <m ; ++i) {
        for (int j = 0; j <n ; ++j){
            cin >> arr[i][j];
            temp[i][j] = arr[i][j];
        }
    }
    for (int i = 0; i <m ; ++i) {
        int right = n-1;
        for (int j = 0; j <n ; ++j) {
            arr[i][j] = temp[i][right];
            right--;
        }
    }
    for (int i = 0; i <m ; ++i) {
        for (int j = 0; j <n ; ++j)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}