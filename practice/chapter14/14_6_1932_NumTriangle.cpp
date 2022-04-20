#include <iostream>

using namespace std;

int N, iMax =0;
int memo[501][501] = {0,};

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N;

	for(int i=1; i<=N; ++i) {
		for(int j=1; j<=i; ++j) {
			cin >> memo[i][j];
			memo[i][j] += max(memo[i-1][j-1],memo[i-1][j]);
		}
	}

	for(int i=1; i<=N; ++i) {
		iMax = max(iMax,memo[N][i]);
	}

	cout << iMax << '\n';

}
