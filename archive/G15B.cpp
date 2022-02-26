#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcases, output;
    cin >> testcases;

    while (testcases)
    {
        int athnum;
        cin >> athnum;
        if (athnum == 1)
        {
            output = 1;
            cout << output;
            continue;
        }
        
        vector<int> mresults, comb;
        for (int i = 0; i < (athnum * 5); i++)
        {
            int temp;
            cin >> temp;
            mresults.push_back(temp);
        }

        for (int i = 0, j = 0; i < athnum; i++)
        {
            comb.push_back((mresults[j] + mresults[j+1] + mresults[j+2] + mresults[j+3] + mresults[j+4]));
            j+=5;
        }
        for (auto& result : comb)
        {
            cout << result << endl;
        }
        //cout << output;
        testcases--;
    }
    return 0;
}