#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    //defs
    int lvls, p, q;
    set<int> lvl_list, comb_set;
    vector<int>  p_lvls, q_lvls, comb_lvls;
    cin >> lvls;
    lvls += 1;

    //set/vector creation
    for (int i = 1; i < lvls; i++)
    {
        lvl_list.insert(i);
    }
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int val;
        cin >> val;
        p_lvls.push_back(val);
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int val;
        cin >> val;
        q_lvls.push_back(val);
    }

    //vector comb/set conversion
    comb_lvls.reserve( p_lvls.size() + q_lvls.size() );
    comb_lvls.insert( comb_lvls.end(), p_lvls.begin(), p_lvls.end() );
    comb_lvls.insert( comb_lvls.end(), q_lvls.begin(), q_lvls.end() );
    for (int i = 0; i < comb_lvls.size(); i++)
    {
        comb_set.insert(comb_lvls[i]);
    }
    
    
    //actual logic
    if (comb_set == lvl_list)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout <<  "Oh, my keyboard!";
    }
    
}