#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long int arr[n];long int temp[n];

    for (int i = 0; i <n ; ++i) {
        cin >> arr[i];
        temp[i] = arr[i];
    }
    sort(temp,temp+n);
    long int min = temp[0],max = temp[n-1];
    for (int i = 0; i <n ; ++i) {
        if (arr[i]==min)
            arr[i] = max;
        else if (arr[i]==max)
            arr[i] = min;
    }
    for (int i = 0; i <n ; ++i) {
        cout << arr[i] << " ";
    }
}