#include <bits/stdc++.h>

using namespace std;

int global;

void hackplus(int a, int b)
{
    global = a + b;
}

int main()
{
    string g = "12345";
    int f = stoi(g.substr(1, 4));
    cout << f << endl;
}