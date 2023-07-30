#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rocks;
    stack<char> rcks;
    string tb;
    cin >> rocks;
    cin >> tb;
    int result = 0;
    for (int i = 0; i < rocks; i++)
    {
        if (i == 0)
        {
            rcks.push(tb[i]);
        }
        else
        {
            if (tb[i] == rcks.top())
            {
                result++;
            }
            else
            {
                rcks.push(tb[i]);
            }
        }
    }
    cout << result;
}
