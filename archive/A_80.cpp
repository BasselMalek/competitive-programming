#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int rows, columns;
    bool CYMK = false;
    cin >> rows;
    cin >> columns;
    char matrix[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int x = 0; x < columns; x++)
        {
            cin >> matrix[i][x];
        }
        
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (('C' == matrix[i][j]) || ('M' == matrix[i][j]) ||('Y' == matrix[i][j]))
            {
                CYMK = true;
            }
            else
            {
                continue;
            }
        }
    }
    if (CYMK)
    {
        cout << "#Color";
    }
    else
    {
        cout << "#Black&White";
    }
    return 0;
}