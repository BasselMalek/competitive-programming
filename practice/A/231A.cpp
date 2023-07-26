#include <bits/stdc++.h>
using namespace std;

int main()
{
    int probs, result = 0;
    cin >> probs;
    for (int i = 0; i < probs; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if ((x + y + z) >= 2)
        {
            result++;
        }
    }
    cout << result;
}
