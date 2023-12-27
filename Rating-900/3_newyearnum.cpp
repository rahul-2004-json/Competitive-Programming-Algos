// Form an eqn between n=2020x+2021y then see if x>=0 for y>=0 if true then print yes
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int c2021 = n % 2020;
        int c2020 = ((n - c2021) / 2020) - c2021;
        if (c2020 >= 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}