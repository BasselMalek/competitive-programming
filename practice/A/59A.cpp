#include <bits/stdc++.h>
using namespace std;

int main()
{
    string inp;
    cin >> inp;
    int upper = 0;
    for (int i = 0; i < inp.length(); i++)
    {
        if (inp[i] < 97)
        {
            upper++;
        }
    }
    if (upper > (inp.length() / 2))
    {
        transform(inp.begin(), inp.end(), inp.begin(), ::toupper);
    }
    else
    {
        transform(inp.begin(), inp.end(), inp.begin(), ::tolower);
    }
    cout << inp;
}
