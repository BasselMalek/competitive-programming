#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
    //defs
    vector<char> kb_r1 = {'q','w','e','r','t','y','u','i','o','p'};
    vector<char> kb_r2 = {'a','s','d','f','g','h','j','k','l',';'};
    vector<char> kb_r3 = {'z','x','c','v','b','n','m',',','.','/'};
    char dir;
    string wrong_string, right_string;

    //input
    cin >> dir;
    cin >> wrong_string;

    //right_shift logic
    if (dir == 'R')
    {
        for (int i = 0; i < wrong_string.size(); i++)
        {
            if (find(kb_r1.begin(), kb_r1.end(), wrong_string[i]) != kb_r1.end())
            {
                char temp_char = *(find(kb_r1.begin(), kb_r1.end(), wrong_string[i]) - 1);
                right_string.push_back(temp_char);
                
            }
            else if (find(kb_r2.begin(), kb_r2.end(), wrong_string[i]) != kb_r2.end())
            {
                char temp_char = *(find(kb_r2.begin(), kb_r2.end(), wrong_string[i]) - 1);
                right_string.push_back(temp_char);
            }
            else if (find(kb_r3.begin(), kb_r3.end(), wrong_string[i]) != kb_r3.end())
            {
                char temp_char = *(find(kb_r3.begin(), kb_r3.end(), wrong_string[i]) - 1);
                right_string.push_back(temp_char);
            }
        }
    }

    //left_shift logic
    else if (dir == 'L')
    {
        for (int i = 0; i < wrong_string.size(); i++)
        {
            if (find(kb_r1.begin(), kb_r1.end(), wrong_string[i]) != kb_r1.end())
            {
                char temp_char = *(find(kb_r1.begin(), kb_r1.end(), wrong_string[i]) + 1);
                right_string.push_back(temp_char);
            }
            else if (find(kb_r2.begin(), kb_r2.end(), wrong_string[i]) != kb_r2.end())
            {
                char temp_char = *(find(kb_r2.begin(), kb_r2.end(), wrong_string[i]) + 1);
                right_string.push_back(temp_char);
            }
            else if (find(kb_r3.begin(), kb_r3.end(), wrong_string[i]) != kb_r3.end())
            {
                char temp_char = *(find(kb_r3.begin(), kb_r3.end(), wrong_string[i]) + 1);
                right_string.push_back(temp_char);
            }
        }
    }

    //output
    cout << right_string;
    return 0;
}