#include <bits/stdc++.h>
using namespace std;

void TestCase() {
	int n, a, b;
	cin >> n >> a >> b;
	vector<int> vec(n);
	for (int i = 0; i < n; i++) {
		cin >> vec[i];
	}
	int both = 0;
	int bob = 0;
	int alice = 0;
	for (int i = 0; i < n; i++) {
		if (vec[i] % a == 0 && vec[i] % b == 0) { // both bob and alice's elements
			both++;
		} else if (vec[i] % a == 0) { // bob's elements
			bob++;
		} else if (vec[i] % b == 0) { // alice's elements
			alice++;
		}
	}
	if (both > 0) { // for the 1st turn (bob's turn), remove all bob and alice's elements
		bob++;
	}
	// now, we just need to check if Bob's no. of elements are greater than Alice's no. of elements
	// note: if they're equal, then Bob would lose because he would be the first player to run out of elements
	cout << (bob > alice ? "BOB" : "ALICE") << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	cin >> tc;
	for (int t = 0; t < tc; t++) {
		TestCase();
	}
	return 0;
}

