#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z;
    cin >> x >> y >> z;
    int min=0,max=0;
    min=(x<y?x:y)<z?(x<y?x:y):z;
    max=(x>y?x:y)>z?(x>y?x:y):z;
    cout << min << " " << max;
    /* We Can Use min() and max() */
}