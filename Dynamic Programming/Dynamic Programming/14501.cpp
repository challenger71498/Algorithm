#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int t[16];
int p[16];
int dpt[16];
int dpp[16];
int maxit = INT_MIN;
int maxip = INT_MIN;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	for (int i = 1; i <= n; ++i) {
		cin >> t[i] >> p[i];
	}

	for (int i = 1; i <= n; ++i) {
		dpt[i] = 1;
		dpp[i] = p[i];

		if (i + t[i] <= n + 1) {
			for (int j = 1; j < i; ++j) {
				if (j + t[j] <= i) {
					dpt[i] = max(dpt[i], dpt[j] + 1);
					dpp[i] = max(dpp[i], dpp[j] + p[i]);
				}
			}
		}
		else {
			dpp[i] = 0;
		}
	}

	cout << *max_element(dpp + 1, dpp + n + 1) << '\n';
}