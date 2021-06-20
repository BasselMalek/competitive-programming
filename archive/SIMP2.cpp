#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int size, target;
    int out1 = 0, out2 = 0;
    vector<int> arr;
    cin >> size;
    cin >> target;
    for (int i=0; i < size; i++)
    {
        int val = 0;
        cin >> val;
        arr.push_back(val);
    }
    for (int x = 0; x < size; x++)
    {
        for (int y = 0; y < size; y++)
        {
            int calc_sum = arr[x] + arr[y];
            if (calc_sum == target & x != y)
            {
                out1 = x + 1;
                out2 = y + 1;
            }
            else
            {
                continue;
            }
        }
    }
    if (out1 == out2)
    {
        cout << "IMPOSSIBLE";
    }
    else
    {
        cout << out2 << " " << out1;
    }
}