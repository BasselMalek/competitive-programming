#include <bits/stdc++.h>
using namespace std;

int main()
{
    int result, pric, dem, i = 1;

    cin >> pric >> dem;

    while (true)
    {
        int test = (i * pric);
        int testd = (i * pric) - dem;
        if (!(test % 10) || !(testd % 10))
        {
            result = i;
            break;
        }
        else
        {
            i++;
        }
    }

    cout << result;
}
