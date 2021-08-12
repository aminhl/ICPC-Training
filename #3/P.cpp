#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long int arr[n];

    for (int i = 0; i <n ; ++i)
        cin >> arr[i];
    bool flag = true;
    int count = 0 ;
    while (flag){
        for (int i = 0; i <n ; ++i) {
            if (arr[i]%2==0){
                arr[i] = (arr[i])/2;
            }
            else{
                flag = false;
                break;
            }
            count++;
        }
    }
    cout << count/n;
}