#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long int arr[n];
    string str;
    cin >> str;
    long long int sum =0;
    for (int i = 0; i <n ; ++i) {
        arr[i] = str[i] - 48;
        sum += arr[i];
    }
    cout << sum;
}