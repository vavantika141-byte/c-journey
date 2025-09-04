#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int> &arr) {
    int max_sum = arr[0];
     int current_sum = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        current_sum = max(arr[i], current_sum + arr[i]);
        max_sum = max(max_sum, current_sum);
    }
    return max_sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << maxSubarraySum(arr) << endl;
}
