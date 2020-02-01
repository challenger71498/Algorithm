//#include <iostream>
//
//using namespace std;
//
//int len = 1;
//int prime[1000001] = { 2, };
//int m, n;
//
//bool isPrime(long long p) {
//	for (long long i = 0; i < len && i * i <= prime[i]; ++i) {
//		if (p % prime[i] == 0) {
//			return false;
//		}
//	}
//
//	return true;
//}
//
//void addPrime(int p) {
//	for (int i = prime[len - 1]; i <= p; ++i) {
//		if (isPrime(i)) {
//			prime[len] = i;
//			len++;
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	cin >> m >> n;
//
//	addPrime(n);
//
//	for (int i = 0; i < len; ++i) {
//		if (m <= prime[i] && prime[i] <= n) {
//			cout << prime[i] << '\n';
//		}
//	}
//}