#include <bits/stdc++.h>
using namespace std;

int main()
{
    int mags, base, groups = 1;
    cin >> mags;
    for (int i = 0; i < mags; i++)
    {
        int curr;
        cin >> curr;
        if (i == 0)
        {
            base = curr;
        }
        if (base != curr)
        {
            base = curr;
            groups++;
        }
    }
    cout << groups;
}
