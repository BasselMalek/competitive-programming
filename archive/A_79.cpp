#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    int lines, first_g = 0, second_g = 0;
    string first, val;
    string second;
    cin >> lines;
    if (lines == 1)
    {
        cin >> first;
        cout << first;
    }
    else
    {
        lines -= 1;
        cin >> first;
        first_g += 1;
        for (int i = 0; i < lines; i++)
        {
            cin >> val;
            if (val == first)
            {
                first_g += 1;
            }
            else
            {
                
                second.assign(val);
                second_g += 1;

            }
        }
        if (first_g > second_g)
        {
            cout << first;
        }
        else
        {
            cout << second;
        }
        
    }
    
}