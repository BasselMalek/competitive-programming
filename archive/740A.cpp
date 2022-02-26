#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    for (int i = 0; i < testcases; i++)
    {
        int result = 0;
        int size;
        vector<int> list;
        cin >> size;
        for (int j = 0; j < size; j++)
        {
            int temp;
            cin >> temp;
            list.push_back(temp);
        }
        if (is_sorted(list.begin(), list.end()))
        {
            result = 0;
            cout << result << "\n";
        }
        else
        {
            while (!(is_sorted(list.begin(), list.end())))
            {
                for (int j = 0; j < list.size(); j++)
                {
                    if (j%2)
                    {
                        for (int k = 1; k < list.size(); k+=2)
                        {
                            vector<int>::iterator ptr = list.begin();
                            if (list[k] > list[k+1])
                            {
                                iter_swap(ptr+[j+1, ptr+j);   
                            }
                        }
                    }
                    else
                    {
                       for (int k = 0; k < list.size(); k+=2)
                        {
                            vector<int>::iterator ptr = list.begin();
                            if (list[k] > list[k+1])
                            {
                                iter_swap(ptr+j+1, ptr+j);   
                            }
                        }
                    }
                }
                result++;
            }
            cout << result << endl;
        }
    }
    return 0;
}