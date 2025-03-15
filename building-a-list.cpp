#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> m;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		m.clear();
		int n;
		cin >> n;
		string str;
		cin >> str;
		for (int i = 1; i < (1 << n); i++)
		{
			string ans = "";
			for (int j = 0; j < n; j++)
				if (i&(1 << j))
					ans += str[j];
			m.push_back(ans);
		}
		sort(m.begin(), m.end());
		for (int i = 0; i < (1 << n) - 1; i++)
			cout << m[i] << endl;
	}
	return 0;
}
