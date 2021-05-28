#include <iostream>
#include<vector>
#define pb push_back

using namespace std;

vector<bool> flag(5000, true);
vector<int> prime;

void gen_prime(int n)
{
	flag[0] = flag[1] = false;
	for (int i = 2; i * i <= n; i++)
	{
		if (flag[i])
		{
			for (int j = i * i; j <= n; j += i)
				flag[j] = false;
			prime.pb(i);
		}
	}
}
int main()
{
// #ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
// #endif
	int n;
	cin >> n;
	gen_prime(n);

	// cout << prime.size() << endl;
	// for (int i = 0; i <= prime.size() - 1; ++i)
	// {
	// 	cout << prime[i] << " ";
	// }
	// cout << endl << flag[2] << endl;
	if (flag[n])
		cout << n << " is a prime number." << endl;
	else
		cout << n << " is not a prime number." << endl;

	return 0;
}