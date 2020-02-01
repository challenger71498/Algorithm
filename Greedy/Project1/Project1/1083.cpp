//#include <stdio.h>
//int main() {
//	int n, s, v[50], i, j;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++) scanf("%d", v + i);
//	scanf("%d", &s);
//	for (i = 0; i < n && s; i++)
//	{
//		int max = v[i], maxi = i;
//		for (j = i + 1; j < n && j <= i + s; j++)
//			if (max < v[j]) max = v[j], maxi = j; s -= maxi - i;
//		while (maxi > i)
//			v[maxi] = v[maxi - 1], maxi--; 
//		v[i] = max;
//	} for (i = 0; i < n; i++) printf("%d ", v[i]); putchar('\n');
//}
//
//
////#include <iostream>
////#include <algorithm>
////#include <climits>
////
////using namespace std;
////
////int arr[51];
////
////void swap(int* i, int* j) {
////	int temp = *i;
////	*i = *j;
////	*j = temp;
////}
////
////int main() {
////	ios::sync_with_stdio(false);
////	cin.tie(NULL);
////
////	int n;
////	cin >> n;
////
////	for (int i = 1; i <= n; ++i) {
////		cin >> arr[i];
////	}
////
////	int s;
////	cin >> s;
////
////	for (int i = 1; i <= n; ++i) {
////		// check s
////		if (s <= 0) {
////			break;
////		}
////
////		// find max in range
////		int maxi = INT_MIN;
////		int loc = 1;
////		for (int j = i; j <= min(s + 1, n); ++j) {
////			if (maxi < arr[j]) {
////				maxi = arr[j];
////				loc = j;
////			}
////		}
////
////		// move max
////		for (int j = loc; j >= i + 1; --j) {
////			arr[j] = arr[j - 1];
////			s--;
////		}
////
////		arr[i] = maxi;
////		s--;
////
////		/*for (int i = 1; i <= n; ++i) {
////			cout << arr[i] << ' ';
////		}
////		cout << '\n';*/
////	}
////
////	for (int i = 1; i <= n; ++i) {
////		cout << arr[i] << ' ';
////	}
////	cout << '\n';
////}