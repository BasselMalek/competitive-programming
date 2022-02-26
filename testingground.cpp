#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool isAlive = true;
    while (isAlive)
    {
        beDisappointed();
        for (int i = 0; i < 6; i++)
        {
            drinkCoffee();
        }
        codeStuff();
        caffeineCrash();
        repeat();
    }
}