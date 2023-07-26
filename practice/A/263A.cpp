#include <bits/stdc++.h>
using namespace std;

int main()
{
    int matrix[5][5];
    pair<int, int> payload;
    int moves;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int temp;
            cin >> temp;
            matrix[i][j] = temp;
            if (temp == 1)
            {
                payload.first = i;
                payload.second = j;
            }
        }
    }
    moves = abs(2 - payload.first) + abs(2 - payload.second);
    cout << moves;
}
