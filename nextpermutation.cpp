#include <iostream>
#include <vector>
#include <algorithm> // for next_permutation and sort

using namespace std;

int main() {
    vector<int> arr = {3, 2, 1};

    // Try to generate the next permutation
    if (next_permutation(arr.begin(), arr.end())) {
        cout << "Next permutation: ";
        for (int num : arr) {
            cout << num << " ";
        }
    } else {
        // If no next permutation exists, print the first permutation
        sort(arr.begin(), arr.end());  // rearrange to ascending order
        cout << "First permutation: ";
        for (int num : arr) {
            cout << num << " ";
        }
    }

    return 0;
}
