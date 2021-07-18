#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z;
    cin >> x >> y >> z;
    int min = (x<y?x:y)<z?(x<y?x:y):z;
    int max = (x>y?x:y)>z?(x>y?x:y):z;
    cout << min << endl << (x+y+z-min-max) <<endl << max << endl << endl << x << endl << y <<endl << z ;
}