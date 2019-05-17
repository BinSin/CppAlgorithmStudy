#include <iostream>
using namespace std;

int main() {
	int len;
	cin >> len;
	int sum = 0;
	while (len-- > 0) {
		int n;
		cin >> n;
		sum += n;
	}
	printf("%d\n", sum);
}