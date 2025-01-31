#include<iostream>
using namespace std;

int main()
{
	int k;
	cin >> k;
	while (k--)
	{
		int mx, my, nx, ny;
		cin >> mx >> my >> nx >> ny;
		cout << 2 * nx - mx << " " << 2 * ny - my << endl;
	}
	return 0;
}
