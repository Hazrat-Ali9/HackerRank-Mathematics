
#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int n;
		cin >> n;
		cout << (long long)n * (n - 1) / 2 << endl;
	}
	return 0;
}
