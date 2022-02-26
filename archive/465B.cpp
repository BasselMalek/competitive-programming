#include <bits/stdc++.h>
 
using namespace std;
 
int resolveInbox(vector<int> list)
{
    int counter = 0;
    auto res = find(list.begin(), list.end(), 1);
    int strt_pos = distance(list.begin(), res);
    if (res == list.end())
    {
        return 0;    
    }
    while (list[list.size()-1] != 1)
    {
        list.pop_back();
    }
    for (int i = strt_pos; i < list.size(); i++)
    {
        if (list[i] == 0 && list[i-1] == 1 && i == list.size()-1)
        {
            continue;
        }
        else if (list[i] == 0 && list[i-1] == 1)
        {
            counter++;
        }
        else if (list[i] == 0)
        {
            continue;
        }
        else
        {
            counter++;
        }
    }
    return counter;
}
int main()
{
    int inbox;
    vector<int> inbox_list;
    cin >> inbox;
    for (int i = 0; i < inbox; i++)
    {
        int tempval;
        cin >> tempval;
        inbox_list.push_back(tempval);
    }
    int result = resolveInbox(inbox_list);
    cout << result;
}