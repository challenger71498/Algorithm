#include <iostream>
#include <numeric>

using namespace std;

int arr[1001][10];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i <= 9; ++i) {
		arr[1][i] = 1;
	}

	for (int i = 2; i <= n; ++i) {
		for (int j = 0; j <= 9; ++j) {
			for (int k = 0; k <= j; ++k) {
				arr[i][j] = (arr[i][j] + arr[i-1][k]) % 10007;
			}
		}
	}

	cout << accumulate(arr[n], arr[n] + 10, 0) % 10007 << endl;

	return 0;
}
