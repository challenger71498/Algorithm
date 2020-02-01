#include <iostream>

using namespace std;

int n, m;
int save[9];

void DFS(int start, int depth) {
	if (depth == m) {
		for (int i = 0; i < m; ++i) {
			cout << save[i] << ' ';
		}
		cout << '\n';
	}
	else {
		for (int i = 1; i <= n; ++i) {
			bool dup = false;
			for (int j = 0; j < depth; ++j) {
				if (save[j] == i) {
					dup = true;
				}
			}
			if (dup) {
				continue;
			}

			save[depth] = i;
			DFS(i, depth + 1);
		}
	}
}

int main() {
	cin >> n >> m;

	DFS(1, 0);
}