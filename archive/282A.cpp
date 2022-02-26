#include <bits/stdc++.h>
using namespace std;

int main()
{
    int input, output;
    cin >> input;
    int probs[2], thing[2];
    thing[0] = input % 10;
    thing[1] = input /10 % 10;
    for (int i = 0; i < 2; i++)
    {
        switch (thing[i]){
            case 0:
            probs[i] = 2;
            break;
            case 1:
            probs[i] = 7;
            break;
            case 2:
            probs[i] = 2;
            break;
            case 3:
            probs[i] = 3;
            break;
            case 4:
            probs[i] = 3;
            break;
            case 5:
            probs[i] = 4;
            break;
            case 6:
            probs[i] = 2;
            break;
            case 7:
            probs[i] = 5;
            break;
            case 8:
            probs[i] = 1;
            break;
            case 9:
            probs[i] = 2;
            break;
        }
    }
    output = probs[0] * probs[1];
    cout << output;
}