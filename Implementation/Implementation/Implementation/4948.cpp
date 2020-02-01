//#include <iostream>
//
//using namespace std;
//
//int len = 1;
//int arr[123457] = { 2, };
//
//bool isPrime(int n) {
//	for (int i = 0; i < len; ++i) {
//		if (n % arr[i] == 0) {
//			return false;
//		}
//	}
//	return true;
//}
//
//void addPrime(int n) {
//	for (int i = arr[len - 1]; i <= 2 * n; ++i) {
//		if (isPrime(i)) {
//			arr[len] = i;
//			len++;
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	while (true) {
//		int n;
//		cin >> n;
//		if (n == 0) {
//			break;
//		}
//		else {
//			addPrime(n);
//		}
//
//		int k = 0;
//
//		for (int i = 0; i < len; ++i) {
//			if (n < arr[i] && arr[i] <= 2 * n) {
//				k++;
//			}
//		}
//		cout << k << '\n';
//	}
//}