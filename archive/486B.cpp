#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string first, second;
    cin >> first;
    cin >> second;
    int result = 0;
    while(second.size() >= first.size())
    {
        for (int i = 0; i < first.size(); i++)
        {
            result = result + (first[i] ^ second[i]);
        }
        second.erase(0, 1);
    }
    cout << result;
}