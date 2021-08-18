#include <bits/stdc++.h>
using namespace std;

int binarySearch(long long arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

int main(void)
{
    int n,q;
    cin >> n >> q;
    long long arr[n];
    for (int i = 0; i <n ; ++i)
        cin >> arr[i];
    sort(arr,arr+n);
    while (q--){
        int x;
        cin >> x;
        int result = binarySearch(arr, 0, n - 1, x);
        (result == -1) ? cout << "not found" << endl
                       : cout << "found" << endl;
    }
}