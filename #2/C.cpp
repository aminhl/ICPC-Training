#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int tab[n];
    int odd=0,even=0,pos=0,neg=0;
    for (int i = 0; i <n ; ++i) {
        cin >> tab[i];
        if (tab[i]%2==0){
            even++;
        }
        else if (tab[i]%2!=0){
            odd++;
        }
        if(tab[i]>0){
            pos++;
        }
        if(tab[i]<0)
            neg++;
    }
    cout << "Even: " << even << endl << "Odd: " << odd << endl << "Positive: " << pos << endl << "Negative: " << neg << endl;
}