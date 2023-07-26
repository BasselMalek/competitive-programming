#include <bits/stdc++.h>
using namespace std;

int main()
{
    int games;
    int scoreA = 0, ScoreD = 0;
    string scores, result;
    cin >> games >> scores;
    for (char i : scores)
    {
        if (i == 'A')
        {
            scoreA++;
        }
        else if (i == 'D')
        {
            ScoreD++;
        }
    }
    if (scoreA > ScoreD)
    {
        cout << "Anton";
    }
    else if (scoreA < ScoreD)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }
}
