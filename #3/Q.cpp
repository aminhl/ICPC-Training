#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    while (x--){
        int n;
        cin >> n;
        int arr[n];
        int count = 0;
        for (int i = 0; i <n ; ++i)
            cin >> arr[i];
        for (int i = 0; i <n ; ++i) {
            for (int j = i; j <n ; ++j) {
                if (arr[j-1]<arr[j])
                    count++;
                else
                    break;
            }
        }
        cout << count+n << endl;
    }
}