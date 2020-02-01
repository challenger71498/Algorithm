#include <iostream>
#include <queue>

using namespace std;

int arr[501][501];
int visited[501];
int n, m;

int k = 0;
void BFS(int v = 1) {
	queue<int> q;
	visited[v] = 1;
	q.push(v);
	q.push(-1);

	int lv = 0;
	while (q.size() != 0 && lv <= 2) {
		int x = q.front();
		q.pop();

		//cout << x << ' ';

		if (x == -1) {
			q.push(-1);
			lv++;
			continue;
		}
		else {
			k++;
		}

		for (int i = 1; i <= n; ++i) {
			if (arr[x][i] == 1 && visited[i] != 1) {
				visited[i] = 1;
				q.push(i);
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;

	for (int i = 1; i <= m; ++i) {
		int x, y;
		cin >> x >> y;
		arr[x][y] = 1;
		arr[y][x] = 1;
	}

	BFS();

	cout << k - 1 << '\n';
}