#include <bits/stdc++.h>
using namespace std;

int main()
{
    int totaldays, sumtime;
    vector<pair<int, int>> dayhour;
    cin >> totaldays >> sumtime;
    for (int i = 0; i < totaldays; i++)
    {
        int min, max;
        cin >> min >> max;
        pair<int, int> temp(min, max);
        dayhour.push_back(temp);
    }
    int propmax = 0, propmin = 0;
    for (auto& thing : dayhour)
    {
        propmax += thing.second;
        propmin += thing.first;
    }
    if ((propmin > sumtime) || (propmax < sumtime))
    {
        cout << "NO";
    }
    else
    {
        cout << "YES" << endl;
        for (int i = 0; i < dayhour.size(); i++)
        {
            int t = min(dayhour[i].first + sumtime - propmin, dayhour[i].second);
            printf((i + 1 < totaldays ? "%d " : "%d\n"), t);
            sumtime -= (t - dayhour[i].first);

        }
    }
}