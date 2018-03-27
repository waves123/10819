#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int calculation(vector<int> &a) {
	int calc = 0;
	for (int i = 1; i < a.size(); i++) {
		calc += abs(a[i - 1] - a[i]);
	}
	return calc;
}

int main() {
	int N;
	int ans = -800;
	cin >> N;
	vector<int> a(N);
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	do {
		ans = max(calculation(a), ans);
	} while (next_permutation(a.begin(), a.end()));

	cout << ans << endl;
}