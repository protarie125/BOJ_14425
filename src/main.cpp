#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto data = unordered_set<string>{};

	int n, m;
	cin >> n >> m;

	while (0 < (n--)) {
		string x;
		cin >> x;
		data.insert(x);
	}

	auto ct = int{ 0 };
	while (0 < (m--)) {
		string x;
		cin >> x;

		if (data.end() != data.find(x)) {
			++ct;
		}
	}

	cout << ct;

	return 0;
}