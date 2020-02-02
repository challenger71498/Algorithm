#include <iostream>

using namespace std;

int n, m;

int save[9];
void track(int start, int depth) {
	save[depth] = start;
	if (depth == m - 1) {
		for (int i = 0; i < m; ++i) {
			cout << save[i] << ' ';
		}
		cout << '\n';
	}
	else {
		for (int i = start; i <= n; ++i) {
			if (save[depth] < i) {
				track(i, depth + 1);
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;

	fill_n(save, 9, 1);

	for (int i = 1; i <= n; ++i) {
		track(i, 0);
	}
	
}