#include <bits/stdc++.h>

using namespace std;

int main()
{
    int number, testcases;
    cin >> testcases;
    vector<string> results;
    for (int i = 0; i < testcases; i++)
    {
        int og, ones, tens, hundereds;
        cin >> number;
        og = number;
        ones = number%10;
        number = number/10;
        tens = number%10;
        number = number/10;
        hundereds = number%10;
        if (og > 100)
        {
             if ((ones >= tens) && (tens >= hundereds))
            {
                results.push_back("YES");
            }
            else
            {
                results.push_back("NO");
            }
        }
        else
        {
             if (ones == tens)
            {
                results.push_back("YES");
            }
            else
            {
                results.push_back("NO");
            }
        }
    }
        
       
    for (string i : results)
    {
        cout << i << endl;
    }
}