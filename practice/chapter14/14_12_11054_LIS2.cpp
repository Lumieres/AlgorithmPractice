#include <iostream>
#include <cmath>

using namespace std;

int N;
int input[1001];
int memo[1001][3];
int answer = 0;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	for(int i=1; i<=N; i++) cin >> input[i];

	for(int i=1; i<=N; i++) {
		memo[i][0] = 1;
		for(int j=i; j>=1; j--) {
			if(input[i]>input[j])
				memo[i][0] = max(memo[i][0],memo[j][0]+1);
		}
	}
	for(int i=N; i>=1; i--) {
		memo[i][1] = 1;
		for(int j=i; j<=N; j++) {
			if(input[i]>input[j])
				memo[i][1] = max(memo[i][1],memo[j][1]+1);
		}
	}
	for(int i=1; i<=N; i++) {
		answer = max(answer,memo[i][0]+memo[i][1]-1);
	}
	cout << answer << '\n';
}
