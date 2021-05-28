#include<iostream>
#define ll long long
#define endl "\n"
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("int2.txt", "r", stdin);
	freopen("out2.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);


	int n;
	cin >> n;

	int ans = 0, arr[2 * n + 1];

	for (int i = 0; i < 2 * n + 1; ++i)
		cin >> arr[i];

//O(n) approach , with sorting it can be done in O(nlogn)
	for (int i = 0; i < 2 * n + 1; ++i)
		ans = ans ^ arr[i];

	cout << ans << endl;

	return 0;
}