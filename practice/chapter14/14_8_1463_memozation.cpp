#include <iostream>
#include <cmath>

using namespace std;

int N;
int memo[1000001] = {0,};

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N;

	for(int i=2; i<=N; i++){
		memo[i] = memo[i-1] + 1;
		if(i % 2 == 0) memo[i] = min(memo[i],memo[i/2] + 1);
		if(i % 3 == 0) memo[i] = min(memo[i],memo[i/3] + 1);
	}
	cout << memo[N] << '\n';
}
