vector<int> intersectionFlexible(vector<vector<int>>& arrays) {
    int n = arrays.size();
    unordered_set<int> s(arrays[0].begin(), arrays[0].end());

    for (int i = 1; i < n; i++) {
        unordered_set<int> temp(arrays[i].begin(), arrays[i].end());
        unordered_set<int> res;
        for (int x : s) {
            if (temp.count(x)) res.insert(x);
        }
        s = res;
    }

    if (s.empty()) return {-1}; // special case

    vector<int> v(s.begin(), s.end());
    sort(v.begin(), v.end());
    return v;
}
//set itself doesnot contain duplicate elements so no need to handle duplicates

