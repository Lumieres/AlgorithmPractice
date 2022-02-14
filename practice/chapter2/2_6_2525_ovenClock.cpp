#include <iostream>

using namespace std;

int h, m;
int addMin;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> h >> m;
	cin >> addMin;

	h += (m+addMin)/60;
	h = h%24;
	m = (m+addMin)%60;

	cout << h << ' ' << m << '\n';
}
