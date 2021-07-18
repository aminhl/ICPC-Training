#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    char c;
    cin >> x >> c >> y;
    if((x-y>0 && c=='>') || (x-y<0 && c=='<') || (x-y==0 && c=='='))
        cout <<"Right";
    else if((x-y>0 && c=='<') || (x-y<0 && c=='>') || (x-y!=0 && c=='='))
        cout <<"Wrong";
}

