#include "bits/stdc++.h"
using namespace std;

#define pb push_back
#define mp make_pair
#define eb emplace_back
#define ll long long
#define all(x) x.begin(), x.end()
#define ff first
#define ss second

void inint()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main()
{
	inint();

	deque<int> q;

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int z;
		cin >> z;

		while (!q.empty() and q.back() > z)
		{
			q.pop_back();
		}
		q.push_back(z);
	}

	for (auto i : q)
	{
		cout << i << " ";
	}

	return 0;
}
