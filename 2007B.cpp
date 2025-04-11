#include <algorithm>
#include <iostream>
#include <vector>

using namespace std ; 



void solve(vector<vector<int>>& allResults) {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int current_max = *max_element(a.begin(), a.end());
    vector<int> result;
    
    for (int i = 0; i < m; ++i) {
        char c;
        int l, r;
        cin >> c >> l >> r;
        if (c == '+') {
            if (current_max >= l && current_max <= r)
                current_max++;
            
        } else{
            if (current_max >= l && current_max <= r)
                current_max--;
            
        }
        result.push_back(current_max);
    }
    allResults.push_back(result);
}

int main() {
    int t;
    cin >> t;
    vector<vector<int>> allResults;
    while (t--) {
        solve(allResults);
    }
    for (const auto& results : allResults){
        for (int i = 0; i < results.size(); ++i) {
            cout << results[i];
            if (i != results.size() - 1)
                cout << ' ';
            
        }
        cout << '\n';
    }
}