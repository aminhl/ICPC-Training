#include <bits/stdc++.h>
using namespace std;

int main(){
    string f1,s1,f2,s2;
    cin >> f1 >> s1 >> f2 >> s2;
    if (strcmp(s1.c_str(),s2.c_str())==0)
        cout <<"ARE Brothers";
    else
        cout <<"NOT";
}