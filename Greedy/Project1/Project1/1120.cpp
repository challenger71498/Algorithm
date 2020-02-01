#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string a, b;
	cin >> a >> b;

	int min = INT_MAX;

	for (int i = 0; i <= b.size() - a.size(); ++i) {
		int diff = 0;

		for (int j = 0; j < a.size(); ++j) {
			if (a[j] == ' ') {
				continue;
			}

			if (a[j] != b[j + i]) {
				//cout << a[j] << " " << b[j + i] << '\n';
				diff++;
			}
		}
		//cout << '\n';

		if (diff < min) {
			min = diff;
		}
	}

	cout << min << '\n';
}