#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int findMajorityElement(vector<int>& arr) {
    unordered_map<int, int> freq;
    int n = arr.size();

    // Count frequencies
    for (int num : arr) {
        freq[num]++;
    }

    // Check majority
    for (auto it : freq) {
        if (it.second > n / 2) {
            return it.first;
        }
    }

    return -1; // No majority element
}

int main() {
    vector<int> arr = {3, 3, 4, 2, 3, 3, 5};
    int majority = findMajorityElement(arr);

    if (majority != -1)
        cout << "Majority element is: " << majority << endl;
    else
        cout << "No majority element found" << endl;

    return 0;
}
