// Bitmasks https://cp-algorithms.com/algebra/all-submasks.html https://www.youtube.com/watch?v=mqCdA8mcJeo
// unsigned int -32 bits
// long long int - 64 bits
// here the question has small array length as bitmask is good for smaller quantity only
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
        long long int arr[n];
        long long int min;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i == 0)
            {
                min = arr[0];
            }
            else
            {
                min = min & arr[i];
            }
        }
        cout << min << endl;
    }
    return 0;
}