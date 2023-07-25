#include <bits/stdc++.h>
using namespace std;

int main()
{
    int team, reqh;
    cin >> team >> reqh;
    vector<int> teams;
    int result = 0;
    for (int i = 0; i < team; i++)
    {
        int temp;
        cin >> temp;
        teams.push_back(temp);
    }
    for (int i = 0; i < team; i++)
    {
        result = result + ((teams[i] > reqh) ? 2 : 1);
    }
    cout << result;
}
