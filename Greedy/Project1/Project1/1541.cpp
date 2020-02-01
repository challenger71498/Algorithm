//#include <iostream>
//#include <string>
//
//using namespace std;
//
//char str[51];
//
//int nums[51];
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	cin >> str;
//
//	string s;
//	int counter = 0;
//	for (int i = 0; str[i] != '\0'; ++i) {
//		// str[i] is a number
//		if ('0' <= str[i] && str[i] <= '9') {
//			s += str[i];
//		} // not a number -> terminate
//		else {
//			nums[counter] += stoi(s);
//			s = "";
//			if (str[i] == '-') {
//				counter++;
//			}
//		}
//	}
//
//	if (s != "") {
//		nums[counter] += stoi(s);
//	}
//
//	int total = nums[0];
//	for (int i = 1; nums[i] != 0; ++i) {
//		total -= nums[i];
//	}
//
//	cout << total << '\n';
//}