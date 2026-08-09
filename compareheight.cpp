#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> height;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        height.push_back(x);
    }

    
    vector<int> h = height;

    
    sort(h.begin(), h.end());

    int count = 0;

   
    for (int i = 0; i < n; i++)
    {
        if (height[i] != h[i])
            count++;
    }

    cout << count;

    return 0;
}