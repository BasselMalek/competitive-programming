#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    for (int i = 0; i < testcases; i++)
    {
        int br, ch, hm, result = 0;
        cin >> br >> ch >> hm;
        if (br == 2)
        {
            result = 3;
            cout << result << endl;
            continue;
        }
        while ((br > 1) && ch)
        {
            br--;
            ch--;
            result += 2;
        }
        while ((br > 1) && hm)
        {
            br--;
            hm--;
            result += 2;
        }
        result++;
        cout << result << endl;
    }
}
