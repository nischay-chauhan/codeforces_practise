#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t; 
	while (t--)
	{
		string s;
		cin >> s;
		int n = s.size();
		int c0 = 0, c1 = 0;

		for (int i = 0; i < n; i++)
		{
			if (s[i] == '0')
				c0++;
			else
				c1++;
		}

		int length_of_t = 0;
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '0' && c1 > 0)
			{
				c1--; 
				length_of_t++; 
			}
			else if (s[i] == '1' && c0 > 0)
			{
				c0--; 
				length_of_t++; 
			}
			else
			{
				break;
			}
		}

		cout << n - length_of_t << "\n";
	}
	return 0;
}
