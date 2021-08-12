#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j <m ; ++j)
            cin >> arr[i][j];
    }
    int search = 0;
    bool flag = false;
    cin >> search;
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j <m ; ++j) {
            if (search==arr[i][j]){
                flag = true;
                break;
            }
        }
    }
    if (flag)
        cout <<"will not take number";
    else
        cout << "will take number";
}