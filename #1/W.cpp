#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y,res;
    char c,eq;
    cin >> x >> c >> y >> eq >> res;
    if ((c=='+' && (x+y==res)) || (c=='-' && (x-y==res)) || (c=='*' && (x*y==res)))
        cout <<"Yes";
    else {
        if (c=='+')
            cout << x+y;
        else if(c=='-')
            cout << x-y;
        else if(c=='*')
            cout << x*y;
    }
}

