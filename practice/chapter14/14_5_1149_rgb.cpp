#include <iostream>
#include <cmath>

using namespace std;

int memo[1001][3];
int N;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N;

	cin >> memo[1][0];
	cin >> memo[1][1];
	cin >> memo[1][2];

	for(int i=2; i<=N; i++) {
		cin >> memo[i][0];
		cin >> memo[i][1];
		cin >> memo[i][2];
		memo[i][0] += min(memo[i-1][1],memo[i-1][2]);
		memo[i][1] += min(memo[i-1][0],memo[i-1][2]);
		memo[i][2] += min(memo[i-1][0],memo[i-1][1]);
	}

	cout << min(min(memo[N][0],memo[N][1]),memo[N][2]) << '\n';
	
}
