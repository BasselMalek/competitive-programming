#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcases, stacks;
    vector<int> stack_heights;
    cin >> testcases;
    for (int i = 0; i < testcases; i++)
    {
        cin >> stacks;
        for (int i = 0; i < stacks; i++)
        {
            int tempval;
            cin >> tempval;
            stack_heights.push_back(tempval);
        }
        for (int i = stack_heights.size(); i = 0; i--)
        {
            if (i <= i-1)
            {
                stack_heights[i] += 1;
                stack_heights[i-1] -= 1;
            }
            else
            {
                continue;
            }
            
        }
    }
    for (int element : stack_heights)
    {
        cout << element;
    }
}