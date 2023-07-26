#include <bits/stdc++.h>
using namespace std;

int main()
{
    int lim, bob, result = 0;
    cin >> lim >> bob;

    while (true)
    {
        lim *= 3;
        bob *= 2;
        result++;
        if (lim > bob)
        {
            break;
        }
    }
    cout << result;
}
