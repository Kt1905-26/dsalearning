#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a, b;
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        b.push_back(x);
    }

    vector<int> uni;  
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (a[i] < b[j]) {
            uni.push_back(a[i]);
            i++;
        } else if (a[i] > b[j]) {
            uni.push_back(b[j]);
            j++;
        } else {
            uni.push_back(a[i]);
            i++;
            j++;  // increment both to avoid duplicates
        }
    }

    // Add remaining elements
    while (i < n) {
        uni.push_back(a[i]);
        i++;
    }
    while (j < m) {
        uni.push_back(b[j]);
        j++;
    }

    // Print result
    for (int k = 0; k < uni.size(); k++) {
        cout << uni[k] << " ";
    }
    cout << endl;

    return 0;
}
