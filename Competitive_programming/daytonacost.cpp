#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    string result;
    for(int i = 0; i < t; i++){
        int n, k;
        cin >> n >> k;
        int arr[n]; 
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }
        bool present = false;
        for (int j = 0; j < n; j++) {  
            if (arr[j] == k) {
                present = true;
                break;
            }
        }
        if (present == true)
            result += "YES";
        else
            result += "NO";
        result += "\n";
    }
    cout << result;
    return 0;
}