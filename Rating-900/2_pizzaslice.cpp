// Focus on Even pieces of slices made and time bieng same for 1 slice to make in each case
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        if (n <= 6)
        {
            cout << (6 / 2) * 5 << endl;
        }
        else if (n >= 6 && n % 2 != 0)
        {
            cout << ((n + 1) / 2) * 5 << endl;
        }
        else
        {
            cout << (n / 2) * 5 << endl;
        }
    }
    return 0;
}