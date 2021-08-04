#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    while (x--){
        int n;
        cin >> n;
        int binaryNum[32];
        int i = 0;
        while (n > 0) {
            binaryNum[i] = n % 2;
            n = n / 2;
            i++;
        }

        double count=0;
        for (int j = i - 1; j >= 0; j--){
            if (binaryNum[j]==1)
                count++;
        }

        double len = count;
        count = pow(10,count-1)+1;
        int dec=0;
        for (int i = 0; i <len ; ++i) {
            dec += pow(2,i);
        }
        cout << dec << endl;
    }
}