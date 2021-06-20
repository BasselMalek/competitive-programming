#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int parti_num;
    vector<int> old_rating, new_rating;
    cin >> parti_num;
    for (int i = 0; i < parti_num; i++)
    {
        int val;
        cin >> val;
        old_rating.push_back(val);
        cin >> val;
        new_rating.push_back(val);
    }
    bool isSorted_new = is_sorted(new_rating.rbegin(), new_rating.rend());
    if (old_rating == new_rating & !isSorted_new)
    {
        cout << "unrated";
    }
    else if (old_rating != new_rating & !isSorted_new)
    {
        cout << "rated";
    }
    else if (old_rating == new_rating & isSorted_new)
    {
        cout << "maybe";
    }
    else
    {
        cout << "rated";
    }
    
    
}