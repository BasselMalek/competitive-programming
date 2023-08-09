#include <bits/stdc++.h>
using namespace std;

int main()
{
    string seq, ins;
    int pos = 0;
    cin >> seq >> ins;
    for (int i = 0; i < ins.length(); i++)
    {
        if (ins[i] == seq[pos])
        {
            pos++;
        }
        }
    cout << ++pos;
}
