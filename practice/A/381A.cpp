#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cards;
    cin >> cards;

    vector<int> crds;
    int serj = 0, dim = 0;
    bool last = true;
    for (int i = 0; i < cards; i++)
    {
        int temp;
        cin >> temp;
        crds.push_back(temp);
    }

    for (int i = 0; i < cards; i++)
    {
        if (last)
        {
            bool big = *(crds.begin()) > *(crds.end() - 1);
            serj += (big) ? *(crds.begin()) : *(crds.end() - 1);
            if (big)
            {
                crds.erase(crds.begin());
            }
            else
            {
                crds.erase((crds.end() - 1));
            }
            last = false;
        }
        else
        {
            bool big = *crds.begin() > *(crds.end() - 1);
            dim += (big) ? *crds.begin() : *(crds.end() - 1);
            if (big)
            {
                crds.erase(crds.begin());
            }
            else
            {
                crds.erase(crds.end() - 1);
            }
            last = true;
        }
    }
    std::cout << serj << " " << dim;
}
