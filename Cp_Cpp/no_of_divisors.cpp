#include<iostream>
#include<cmath>
#define ll long long
#define endl "\n"
using namespace std;

int no_of_div(int n)
{
	int count = 0;
	for (int i = 1; i <= sqrt(n); ++i)
	{
		if (n / i == i)
			count++;
		else if (n % i == 0)
			count += 2;
	}
	return count;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("int2.txt", "r", stdin);
	freopen("out2.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	// cout << 12 << endl;

	cout << no_of_div(n) << endl;
	// cout << "lol" << endl;
	return 0;
}