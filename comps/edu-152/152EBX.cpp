#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> &a,
         pair<int, int> &b)
{
    if (a.second != b.second)
    {
        return a.second < b.second;
    }
    else
    {
        return a.first > b.first;
    }
}
int main()
{
    int testcases;
    cin >> testcases;
    for (int i = 0; i < testcases; i++)
    {
        int monscount, dmg, killed = 0;
        cin >> monscount >> dmg;
        vector<pair<int, int>> mons;
        vector<int> result;
        for (int i = 0; i < monscount; i++)
        {
            int temp;
            cin >> temp;
            mons.push_back(make_pair(i, temp));
        }
        sort(mons.begin(), mons.end(), cmp);
        while (killed != monscount)
        {
            (mons.end() - 1)->second -= dmg;
            if ((mons.end() - 1)->second <= 0)
            {
                killed++;
                result.push_back(((mons.end() - 1)->first) + 1);
            }
            sort(mons.begin(), mons.end(), cmp);
        }
        for (auto i : result)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
