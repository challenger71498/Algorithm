#include <iostream>
#include <queue>

using namespace std;

int arr[1001][1001];
int visited[1001];
int n, m, r;

void clear() {
	for (int i = 0; i < 1001; ++i) {
		visited[i] = 0;
	}
}

void DFS(int v = r) {
	visited[v] = 1;
	cout << v << ' ';
	for (int i = 1; i <= n; ++i) {
		if (arr[v][i] == 1 && visited[i] != 1) {
			DFS(i);
		}
	}
}

void BFS(int v = r) {
	queue<int> q;
	visited[v] = 1;
	q.push(v);
	while (q.size() != 0) {
		int num = q.front();
		q.pop();
		cout << num << ' ';
		for (int i = 1; i <= n; ++i) {
			if (arr[num][i] == 1 && visited[i] != 1) {
				visited[i] = 1;
				q.push(i);
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m >> r;

	for (int i = 0; i < m; ++i) {
		int x, y;
		cin >> x >> y;
		arr[x][y] = 1;
		arr[y][x] = 1;
	}

	DFS();
	clear();
	cout << '\n';
	BFS();
}