#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int candidate = arr[n / 2];
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == candidate)
            count++;
    }

    if(count > n / 2)
        cout << "Majority Element = " << candidate << endl;
    else
        cout << "No Majority Element" << endl;

    return 0;
}