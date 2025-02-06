#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    return b ? gcd(b, a%b) : a;
}

int main()
{
    int d;
    cin >> d;
    while (d--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (c % gcd(a, b) == 0 && c <= max(a, b))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
