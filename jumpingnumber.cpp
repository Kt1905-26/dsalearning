#include <bits/stdc++.h>
using namespace std;

int diff(int n)
{
    while (n >= 10)
    {
        int last = n % 10;
        int secondlast = (n / 10) % 10;

        if (abs(last - secondlast) != 1)
        {
            return 0;
        }

        n = n / 10;
    }

    return 1;
}

int main()
{
    int end;
    cin >> end;

    for (int i = 0; i <= end; i++)
    {
        if (i <= 9 || diff(i) == 1)
        {
            cout << i << endl;
        }
    }

    return 0;
}