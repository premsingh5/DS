#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, long_len, curr_left;
    string s;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> s;
		long_len = 0;
		curr_left = 0;
		for (int j = 0; j < s.size() && curr_left >= 0; j++) {
			if (s[j] == '<') {
				curr_left++;
			}
			else {
				curr_left--;
				if (curr_left == 0) {
					long_len = j+1;
				}
			}
		}

		cout << long_len << "\n";
	}

	return 0;
}
