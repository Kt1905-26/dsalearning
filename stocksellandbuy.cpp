#include <bits/stdc++.h>
using namespace std;

int profit(vector<int> &price)
{
    int minPrice = price[0];
    int maxProfit = 0;

    for (int p : price)
    {
        if (p < minPrice)
        {
            minPrice = p;
        }

        int currProfit = p - minPrice;
        maxProfit = max(maxProfit, currProfit);
    }

    return maxProfit;
}

int main()
{
    int n;
    cin >> n;

    vector<int> price;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        price.push_back(x);
    }

    cout << profit(price);

    return 0;
}