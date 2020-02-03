#include <iostream>

using namespace std;

int n, m;

char arr[52][52];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			arr[i][j] = getc(stdin);
		}
	}

	system("pause");
	return 0;
}