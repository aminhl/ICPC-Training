#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    while (x--){
        int n;
        cin >> n;
        long long int arr[n];
        for (int i = 0; i <n ; ++i) {
            cin >> arr[i];
        }
        for(int length=0;length<n;++length){
            for(int i=0;i<n;++i){
                long long int maxi=arr[i];
                int cnt=0;
                for(int j=i;j-i<=length&&j<n;++j){
                    cnt++;
                    maxi=max(maxi,arr[j]);
                }
                if(cnt==length+1){
                    cout<<maxi<<" ";
                }
            }
        }
        cout << endl;
    }
}