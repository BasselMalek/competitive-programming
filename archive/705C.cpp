#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;

void eventResolver(int apps, int type, int parm, vi& notis, int& unread, vii& order)
{
    parm--;
    switch (type)
    {
    case 1:
    {
        notis[parm]++;
        unread++;
        ii noti = make_pair(parm, 1);
        order.push_back(noti);}
        break;
    
    case 2:
        unread -= notis[parm];
        for (int i = 0; i < notis[parm]; i++)
        {
            for (int j = 0; j < apps; j++)
            {
                if (order[i].first == parm)
                {
                    if (order[i].second) order[i].second = 0;
                }
            }
        }
        notis[parm] = 0;
        break;

    case 3:
        int temp = 0;
        for (int i = 0; i <= parm; i++)
        {
            if (order[i].second)
            {
                order[i].second = 0;
                temp++;
                notis[order[i].first]--;
            }
        }
        unread -= temp;
        break;
    }
    cout << unread << endl;
}

int main()
{
    int apps, events;
    cin >> apps >> events;
    vi notis(apps, 0);
    vii order;
    int unread = 0;
    for (int i = 0; i < events; i++)
    {
        int type, arg;
        cin >> type >> arg;
        eventResolver(apps, type, arg, notis, unread, order);
    }
    
}