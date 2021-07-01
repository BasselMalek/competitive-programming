#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    for (int i = testcases; i > 0; i--)
    {
        int cat_number;
        deque<int> cats;
        cin >> cat_number;
        for (int x = 1; x < cat_number+1; x++)
        {
            cats.push_back(x);
        }
        if (cat_number%2 != 0)
        {
            for (int y = 0; y < cats.size()-2; y+=2)
            {
                iter_swap(cats.begin() + y, cats.begin() + y + 1);
                
            }
            iter_swap(cats.end() - 2, cats.end() - 1);
        }
        else
        {
             for (int y = 0; y < cats.size()-1; y+=2)
            {
                iter_swap(cats.begin() + y, cats.begin() + y + 1);
            }
        }
        
        for (auto& cat: cats)
        {
            cout << cat << " ";
        }
        cout << endl;
    }
}