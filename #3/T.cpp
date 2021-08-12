#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long int arr[n][n];
    int size = n;
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j <n ; ++j)
            cin >> arr[i][j];
    }
    int i=0,j=0,k=n-1;
    long int sumL=0,sumD=0;
    do{
        sumL += arr[i][j];
        sumD += arr[i][k];
        i++;
        j++;
        k--;
        size--;
    } while (size>0);
    cout << abs(sumL-sumD);
}