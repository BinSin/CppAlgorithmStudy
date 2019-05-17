#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int N;
	cin >> N;
	int A[1001];
	for (int i = 0; i < N; i++)
		cin >> A[i];
	reverse(A, A + N);
	for (int i = 0; i < N; i++)
		cout << A[i] << " ";
}