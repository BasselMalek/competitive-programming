#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    bitset<1024> sset;
    sset.reset(1);
    sset.reset(0);
    for (int i = 2; i < finalBit; ++i)
    {
        if (sieve.test(i)) // bit i is on
        {
            for (int j = 2 * i; j < SIZE; j += i)
                sieve.reset(j); // set bit j off
        }
    }
    while (testcases)
    {
        int num;
        string s;

        testcases--;
    }
}