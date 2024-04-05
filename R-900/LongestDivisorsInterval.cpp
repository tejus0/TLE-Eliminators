#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define nl endl

int main()
{
	int test=1;
	cin >> test;
	while (test--)
	{
		ull n;
		cin >> n;

		ull ans;
		for (ull i = 1;; i++)
		{
			if (n % i != 0)
			{
				ans = i - 1;
				break;
			}
		}
		cout << ans << nl;
	}
	return 0;
}