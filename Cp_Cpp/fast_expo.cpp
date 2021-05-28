#include <iostream>
#define ll long long
#define mod 1000000007
#define endl "\n"

using namespace std;


ll pow(ll a, ll b, int m)
{
	ll res = 1;

	while (b > 0)
	{
		if (b & 1)
			res *= a % m;
		a *= a % m;
		b >>= 1;
	}
	return res;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	ll a, b;

	cin >> a >> b;

	cout << pow(a, b, mod) << endl;

	return 0;
}