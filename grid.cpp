#include <bits/stdc++.h>
using namespace std;

string gridChallenge(vector<string> grid) {
    
    for (auto &row : grid) sort(row.begin(), row.end());

    int n = grid.size(), m = grid[0].size();

    
    for (int col = 0; col < m; col++) {
        for (int row = 1; row < n; row++) {
            if (grid[row][col] < grid[row-1][col])
                return "NOOOO"; 
        }
    }
    return "YESSSSS";
}

int main()
 {
    int t; cin >> t; 
    while (t--) {
        int n;
         cin >> n;
        vector<string> grid(n);
        for (int i = 0; i < n; i++) cin >> grid[i];
        cout << gridChallenge(grid) << endl;
    }
}
