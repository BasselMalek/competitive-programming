#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int rows, columns;
    int counter1 = 0, counter2 = 0;
    char pre_co;
    cin >> rows;
    cin >> columns;
    cin >> pre_co;
    vector<vector<char>> office(rows , vector<char> (columns));
    vector<int> pre_pos;
    set<char> prev;
    for (int i = 0; i < rows; i++)
    {
        for (int x = 0; x < columns; x++)
        {
            char color;
            cin >> color;
            office[i][x] = color;
            if (color == pre_co)
            {
                counter1++;
                pre_pos.push_back(i);
                pre_pos.push_back(x);
            }
            
        }
    }
    for (int f = 0; f < counter1; f++)
    {
        int c = 0;
        for (int i = 0; i < rows; i++)
        {
            for (int x = 0; x < columns; x++)
            {
                int pre_cor = pre_pos[c] + pre_pos[c+1];
                if ((i + x == pre_cor-1 || i + x == pre_cor+1) && !(office[i][x] == '.') && !(office[i][x] == pre_co) && (prev.find(office[i][x]) != prev.end()))
                {
                    counter2++;
                    prev.insert(office[i][x]);
                }
            }
        }
        c++;
    }
    cout << counter2;
}