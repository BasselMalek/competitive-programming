#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;
    set<char> z;
    for (int i = 0; i < x.length(); i++)
    {
        z.insert(x[i]);
    }
    if (z.size() % 2)
    {
        cout << "IGNORE HIM!";
    }
    else
    {
        cout << "CHAT WITH HER!";
    }
}
