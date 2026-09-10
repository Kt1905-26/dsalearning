#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string twoSum(vector<int>& arr, int X) {
        unordered_map<int,int> m;  // value -> index
        int n = arr.size();

        for(int i = 0; i < n; i++) {
            int complement = X - arr[i];
            if(m.find(complement) != m.end()) {
                return "YES";  // pair found
            }
            m[arr[i]] = i;  // store current value with index
        }
        return "NO";  // no pair found
    }
};
