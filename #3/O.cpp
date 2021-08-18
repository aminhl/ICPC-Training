#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long int arr[n];
    long long int a = 0,b = 1,c = 0;
    for (int i = 0; i <n ; ++i){
        arr[i] = a;
        c=a+b;
        a=b;
        b=c;
    }
    cout << arr[n-1];
}