#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int, int> tracks;
    string events;
    int result = 0;
    for (int i = 1; i < 5; i++)
    {
        int val;
        cin >> val;
        tracks.insert(make_pair(i, val));
    }
    cin >> events;
    for (int i = 0; i < events.length(); i++)
    {
        int ev = int(events[i] - '0');
        result += tracks[ev];
    }
    cout << result;
}
