#include <bits/stdc++.h>
using namespace std;

int main()
{
    int col;
    vector<int> cols;
    cin >> col;
    for (int i = 0; i < col; i++)
    {
        int temp;
        cin >> temp;
        cols.push_back(temp);
    }
    sort(cols.begin(), cols.end());
    for (auto &&i : cols)
    {
        cout << i << " ";
    }
}
