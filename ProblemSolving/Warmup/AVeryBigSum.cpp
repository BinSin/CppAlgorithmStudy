#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	unsigned long long sum = 0, in;
	while (n-- > 0) {
		cin >> in;
		sum += in;
	}
	cout << sum << endl;
}