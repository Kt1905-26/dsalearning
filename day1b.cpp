#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, sum;
    cin >> n >> k;

    cout << "The original number is: " << n << endl;

    string a = to_string(n);
    string r = "";

    for (int i = 0; i < k; i++) {
        r += a;
    }

    long long b = stoll(r);

    int d = b % 9;

    if (d == 0)
        sum = 9;
    else
        sum = d;

    cout << sum;

    return 0;
}