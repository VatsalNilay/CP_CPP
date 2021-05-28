#include<iostream>
#include <vector>
using namespace std;
#define pb push_back


const int M = 5e5 + 5;

vector<vector<int>>factors(M);
void precalc()
{
	int i, j;
	for (int i = 1; i < M; ++i)
	{
		for (int j = i; j < M; j += i)
			factors[j].pb(i);
	}
}

void printVec(vector<int>&v)
{
	cout << "Size: " << v.size() << endl;
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}
int main()
{
	precalc();

	int N;
	cin >> N;
	// for (int i = 0; i < factors.size(); ++i)
	// {
	// 	for (int j = 0; j < factors.size(); ++i)
	// 	{
	// 		cout << factors[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	vector<int>v[N];
	for (int i = 0; i < N; ++i)
	{
		int n;
		cin >> n;
		for (int j = 0; j < n; ++j)
		{
			int x;
			cin >> x;
			v[i].pb(x);
		}
	}
	for (int i = 0; i < N; ++i)
		printVec(v[i]);

	return 0;
}
