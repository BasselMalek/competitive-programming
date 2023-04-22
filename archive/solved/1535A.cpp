//https://codeforces.com/contest/1535/problem/A
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int testcases;
	cin >> testcases;
	vector<string> results;
	for (int i = 0; i < testcases; i++)
	{
		vector<int> players, bigtwo, finals;
		for (int y = 0; y < 4; y++)
		{
			int temp;
			cin >> temp;
			players.push_back(temp);
		}
		for (int x = 0; x < 4; x+=2)
		{
			if (players[x] > players[x+1])
			{
				finals.push_back(players[x]);
			}
			else
			{
				finals.push_back(players[x+1]);
			}
		}
		sort(players.begin(), players.end(), greater<int>());
		bigtwo.push_back(players[0]);
		bigtwo.push_back(players[1]);
		sort(finals.begin(), finals.end(), greater<int>());
		if (finals == bigtwo)
		{
			results.push_back("YES");
		}
		else
		{
			results.push_back("NO");
		}
	}
	for (string result : results)
	{
		cout << result << endl;
	}
}