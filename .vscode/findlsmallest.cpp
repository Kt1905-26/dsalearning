//print the smallet and largest and secondamallest and secondlarhest and so on 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    sort(arr.begin(), arr.end());

    int smallest = arr[0];
    int largest = arr[n - 1];

    int ssmallest = -1;
    int slargest = -1;
 // Find second smallest
    for(int i = 1; i < n; i++)
    {
        if(arr[i] != smallest)
        {
            ssmallest = arr[i];
            break;
        }
    }

   
    for(int i = n - 2; i >= 0; i--)
    {
        if(arr[i] != largest)
        {
            slargest = arr[i];
            break;
        }
    }

    cout << "Smallest = " << smallest << endl;
    cout << "Largest = " << largest << endl;
    cout << "Second Smallest = " << ssmallest << endl;
    cout << "Second Largest = " << slargest << endl;

    return 0;
}
