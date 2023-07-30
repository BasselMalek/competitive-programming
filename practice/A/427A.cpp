#include <bits/stdc++.h>
using namespace std;

int main()
{
    int events, result = 0, manpwr = 0;
    cin >> events;
    for (int i = 0; i < events; i++)
    {
        int ev;
        cin >> ev;
        if (ev < 0 && manpwr <= 0)
        {
            result++;
        }
        else
        {
            manpwr += ev;
        }
    }
    cout << result;
}
