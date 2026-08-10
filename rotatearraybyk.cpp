//rotate the array by k elements
#include <bits/stdc++.h>    
using namespace std;
void reverse(vector<int>& v, int start, int end) {
    while (start < end) {
        int temp=v[start];
        v[start] = v[end];
        v[end] = temp;
        start++;
        end--;
    }
}
int main() {
    vector<int> v;
    int n, k;
    cin >> n >> k; // Read the size of the array and the number of rotations
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    k = k % n; // Handle cases where k is greater than n
    reverse(v.begin(), v.end()); // Reverse the entire array
    reverse(v.begin(), v.begin() + k); // Reverse the first k elements
    reverse(v.begin() + k, v.end()); // Reverse the remaining elements
    
    for (int i = 0; i < n; i++) {
        cout << v[i] << " "; // Output the rotated array
    }
    
    return 0;
}