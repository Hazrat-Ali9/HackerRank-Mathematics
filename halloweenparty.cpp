
#include<iostream>
using namespace std;

int main()
{
	int m;
	cin >> m;
	while (m--)
	{
		int k;
		cin >> k;
		if (k % 2 == 1)
		{
			long long tmp = k / 2;
			cout << tmp * (tmp + 1) << endl;
		}
		else
		{
			cout << (long long)k * k / 4 << endl;
		}
	}
}
