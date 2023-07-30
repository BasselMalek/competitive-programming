#include <bits/stdc++.h>
using namespace std;

int main()
{
    int teams, games, result = 0;
    vector<pair<int, int>> tcolors;
    cin >> teams;
    games = teams * (teams - 1);
    for (int i = 0; i < teams; i++)
    {
        int hm, gu;
        cin >> hm >> gu;
        tcolors.push_back(make_pair(hm, gu));
    }
    for (int i = 0; i < teams; i++)
    {
        int hmclr = tcolors[i].first;
        for (int j = 0; j < teams; j++)
        {
            if (i != j)
            {
                result += (hmclr == tcolors[j].second) ? 1 : 0;
            }
        }
    }
    cout << result;
}
