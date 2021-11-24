#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<string> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// simply get the root word of all the given strings by removing
	// all the duplicate letters and store all of them in a set
	// to find the total number of unique root words
	set<string> s;
	for (int i = 0; i < n; i++) {
		sort(a[i].begin(), a[i].end());
		a[i].resize(unique(a[i].begin(), a[i].end()) - a[i].begin());
		s.insert(a[i]);
	}
	cout << (int) s.size() << '\n';
	return 0;
}
