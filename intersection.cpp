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

    vector<int> inter;
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (a[i] == b[j]) {
            inter.push_back(a[i]);
            i++;
            j++;
        } else if (a[i] < b[j]) {
            i++;
        } else {
            j++;
        }
    }

    for (int k = 0; k < inter.size(); k++) {
        cout << inter[k] << " ";
    }
    cout << endl;

    return 0;
}
