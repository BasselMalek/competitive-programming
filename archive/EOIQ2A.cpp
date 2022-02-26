#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int lines, length;
        cin >> lines >> length;
        bitset<1001> grand, check;
        string base, result, final;
        for (int i = 0; i < lines; i++)
        {
            if (!i)
            {
                string temp;
                cin >> temp;
                bitset<1001> stemp(temp);
                check=stemp;
                grand = stemp;   
            }
            else
            {
                string temp;
                cin >> temp;
                bitset<1001> stemp(temp);
                grand= check ^ stemp;
            }
        }
        result = grand.to_string();
        for (int i = result.size()-1; i > result.size()-1-length; i--)
        {
            if(result[i] == '0')
            {
                final.push_back(base[i]);
            }
            else
            {
                final.push_back('?');
            }
        }
        reverse(final.begin(), final.end());

        cout << final << endl;
    }
}