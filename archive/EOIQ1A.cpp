#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

int main()
{
    int testcases;
    cin >> testcases;
    for (int i = 0; i < testcases; i++)
    {
        int length, number;
        cin >> length >> number;
        if ((length%2 == 0 )&& (number%2 == 0))
        {
            cout << number;
        }
        else if ((length%2 == 0 )&& (number%2 != 0))
        {
            cout << number-1;
        }
        else if ((length%2 != 0 )&& (number%2 == 0))
        {
            cout << number-1;
        }
        else
        {
            cout << number;
        }
        cout << endl;
    }
}