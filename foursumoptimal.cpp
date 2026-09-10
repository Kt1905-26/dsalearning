#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        if (i > 0 && nums[i] == nums[i-1]) continue; // skip duplicates

        for (int j = i+1; j < n; j++) {
            if (j > i+1 && nums[j] == nums[j-1]) continue; // skip duplicates

            int left = j+1, right = n-1;
            while (left < right) {
                long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];
                if (sum == target) {
                    res.push_back({nums[i], nums[j], nums[left], nums[right]});
                    left++;
                    right--;
                    while (left < right && nums[left] == nums[left-1]) left++;
                    while (left < right && nums[right] == nums[right+1]) right--;
                } else if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
    }
    return res;
}

int main() {
    vector<int> arr = {1, 0, -1, 0, -2, 2};
    int target = 0;
    auto ans = fourSum(arr, target);
    for (auto quad : ans) {
        cout << "[" << quad[0] << ", " << quad[1] << ", " 
             << quad[2] << ", " << quad[3] << "]\n";
    }
    return 0;
}
