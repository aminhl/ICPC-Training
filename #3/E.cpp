#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long int array[n];
    for (int i = 0; i <n ; ++i){
        cin >> array[i];
    }
    long long int min = array[0];
    long long int index = 0;
    for (int i = 0; i <n ; ++i) {
        if (array[i]<min){
            index = i;
            min = array[i];
        }
    }
    cout << min << " " << index+1;
}