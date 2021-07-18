#include <bits/stdc++.h>
using namespace std;

int main(){
    float x;
    cin >> x;
    if (ceil(x)==x && floor(x)==x)
        cout <<"int " <<x;
    else
        cout <<"float " << floor(x) << " " <<fixed << setprecision(3) << x-floor(x);
}

