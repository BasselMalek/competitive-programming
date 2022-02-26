#include <bits\stdc++.h>
 
using namespace std;
 
vector<vector<char>> createGrid(int n)
{
    vector<vector<char>> grid( n , vector<char> (n, 'S'));
    return grid;
}
 
bool createIslands(int n, vector<vector<char>>& grid)
{
    for (int i = 0; i < grid.size(); i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < grid.size(); j+=2)
            {
                if (n>0)
                {
                    grid[i][j] = 'L';
                    n--;
                }
            }
        }
        else
        {
            for (int j = 1; j < grid.size(); j+=2)
            {
                if (n>0)
                {
                    grid[i][j] = 'L';
                    n--;
                }  
            }
        }
    }
    if (n > 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void printGrid(vector<vector<char>> grid)
{
    for(int i = 0; i < grid.size(); i++)
    {
        for(int j = 0; j < grid.size(); j++)
        {
            cout << grid[i][j];
        }
        cout<< endl;
    }
}
int main()
{
    int grid_size, island_number;
    cin >> grid_size;
    cin >> island_number;
    auto grid = createGrid(grid_size);
    if (createIslands(island_number, grid))
    {
        cout << "YES" << endl;
        printGrid(grid);
    }
    else
    {
        cout << "NO";
    }
    
}