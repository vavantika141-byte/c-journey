#include <bits/stdc++.h>
using namespace std;

string balancedSums(vector<int> arr) {
    long long total = accumulate(arr.begin(), arr.end(), 0LL); 
    long long leftSum = 0;

    for (int x : arr) {
        
        if (leftSum == total - leftSum - x) return "YES";
        leftSum += x; 
    }
    return "NO";
}

int main() {
    int t; cin >> t; 
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << balancedSums(arr) << endl;
    }
}
