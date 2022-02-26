#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rooms, counter = 0;
    string order;
    cin >> rooms;
    cin >> order;
    unordered_map<char, int> mytable;
    for (auto& charc : order)
    {
        charc = tolower(charc);
    }
    char alphabet[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    for (auto& charc : alphabet)
    {
        mytable[charc] = 0;
    }
    
    for (int i = 0; i < rooms*2-2; i+=2)
    {
        mytable[order[i]]++;
        if (!(mytable[order[i+1]]))
        {
            counter++;
            mytable[order[i+1]]++;
        }
        mytable[order[i+1]]--;
    }
    cout << counter;
}
