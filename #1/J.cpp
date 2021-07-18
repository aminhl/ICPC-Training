#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    string output = (x%y==0 || y%x==0)? "Multiples":"No Multiples";
    cout << output;
}