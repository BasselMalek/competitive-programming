#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int size, target;
    int out1 = 0, out2 = 0, out3 = 0;
    vector<int> arr;
    cin >> size;
    cin >> target;
    for (int i=0; i < size; i++)
    {
        int val = 0;
        cin >> val;
        arr.push_back(val);
    }
    for (int x : arr)
    {
        for (int y : arr)
        {
            for (int z : arr)
            {
                if (x + y + z == target)
            {
                out1 = distance(arr.begin(), find(arr.begin(), arr.end(), x)) + 1;
                out2 = distance(arr.begin(), find(arr.begin(), arr.end(), y)) + 1;
                out3 = distance(arr.begin(), find(arr.begin(), arr.end(), z)) + 1;
            }
            else
            {
                continue;
            }
            }
        }
    }
    if (out1 == out2)
    {
        cout << "IMPOSSIBLE";
    }
    else
    {
        cout << out3 << " " << out2 << " " << out1;
    }
}