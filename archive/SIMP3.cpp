#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size;
    int moves = 0;
    vector<int> arr;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int val;
        cin >> val;
        arr.push_back(val);
    }
    
    for (int i = 0; i < size-1; i++)
    {
        if (arr[i] > arr[i+1])
        {
            int val = arr[i] - arr[i+1];
            arr[i+1] += val;
            moves += val;
        }
        else if (arr[i] <= arr[i+1])
        {
            continue;
        } 
    }
    cout << moves << endl;
}