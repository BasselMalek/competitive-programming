#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcases;
    vector<int> sols;
    cin >> testcases;
    for (int i = 0; i < testcases; i++)
    {
        int bold, mountains;
        vector<int> mounh;
        cin >> mountains >> bold;
        for (int i = 0; i < mountains; i++)
        {
            int val;
            cin >> val;
            mounh.push_back(val);
        }
        for (int i = 0; i < bold; i++)
        {
            int sol, pos = mounh[i];
            if (pos >= mounh[i+1])
            {
                continue;
            }
            if (pos < mounh[i+1])
            {
                mounh[i] =+ 1;
            }
            if (i == mounh.size()-1)
            {
                sol = -1;
            }
        }
        sols.push_back(pos);
    }
    for (int sol : sols)
}