#include <bits/stdc++.h>
using namespace std;

int main(){
    string intervals[4]={"[0,25]","(25,50]","(50,75]","(75,100]"};
    double x;
    cin >> x;
    if (x>=0 && x<=25)
        cout << "Interval " <<intervals[0];
    else if (x>25 && x<=50)
        cout << "Interval " << intervals[1];
    else if (x>50 && x<=75)
        cout << "Interval " << intervals[2];
    else if (x>75 && x<=100)
        cout << "Interval " << intervals[3];
    else
        cout <<"Out of Intervals";
}