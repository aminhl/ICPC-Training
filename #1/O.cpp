#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    char c;
    cin >> x >> c >> y;
    if (c=='+')
        cout << x+y;
    else if(c=='-')
        cout << x-y;
    else if(c=='*')
        cout << x*y;
    else if (c=='/')
        cout << x/y;
    else
        cout << "Wrong Operator";
}