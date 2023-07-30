#include <bits/stdc++.h>
using namespace std;

int main()
{
    int result, pric, dem;
    bool carped = true;
    cin >> pric >> dem;
    int i = 1;
    while (carped)
    {
        int tot = pric * i;
        if (!(tot % 10) || !(tot % (10 + dem)))
        {
            result = i;
            carped = false;
        }
        i++;
    }
    cout << result;
}
