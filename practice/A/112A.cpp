#include <bits/stdc++.h>
using namespace std;

int main()
{
    string first, second;
    cin >> first >> second;
    transform(first.begin(), first.end(), first.begin(), ::tolower);
    transform(second.begin(), second.end(), second.begin(), ::tolower);
    for (int i = 0; i < first.length(); i++)
    {
        if (first[i] > second[i])
        {
            cout << 1;
            break;
        }
        else if (first[i] < second[i])
        {
            cout << -1;
            break;
        }
        else if (i == first.length() - 1)
        {
            cout << 0;
            break;
        }
    }
}
