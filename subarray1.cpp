#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int len = 0;
    // Brute force: check all subarrays
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0;
            for (int m = i; m <= j; m++) {
                sum += v[m];
            }
            if (sum == k) {
                len = max(len, j - i + 1);
            }
        }
    }

    cout << len << endl;
    return 0;
}
