#include <iostream>
using namespace std;
int main() {
	int n, sum = 0;
	for (int i = 0; i < 3; i++) {
		cin >> n;
		sum += n;
	}
	cout << sum << endl;
}