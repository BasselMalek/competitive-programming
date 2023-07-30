#include <bits/stdc++.h>
using namespace std;

int main()
{
    string inp;
    char curr = 'a';
    int result = 0;
    cin >> inp;
    for (int i = 0; i < inp.length(); i++)
    {
        int cwdis = abs(int(curr - inp[i]));
        if (cwdis > 13)
        {
            int ccdis = 26 - cwdis;
            result += ccdis;
            curr = inp[i];
        }
        else
        {
            result += cwdis;
            curr = inp[i];
        }
    }
    cout << result;
}
