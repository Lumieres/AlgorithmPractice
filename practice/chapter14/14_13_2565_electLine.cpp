#include <iostream>
#include <cmath>

using namespace std;

int N;
int memo[501] = {0,};
int input[501] = {0,};
int answer = 0;
int bM = 0;
int bN = 501;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N;

	int p=0;
	for(int i=1; i<=N; i++) {
		cin >> p;
		cin >> input[p];
		memo[p] = 1;
		bM = max(bM,p);
		bN = min(bN,p);
	}

	memo[bN] = 1;

	for(int i=bN; i<=bM; i++) {
		for(int j=i; j>=bN; j--) {
			if(input[j]!=0 && input[i]!=0 && input[i]>input[j])
				memo[i] = max(memo[i],memo[j]+1);
		}
	}

	for(int i=bN; i<=bM; i++) {
		answer = max(answer,memo[i]);
	}
	answer = N - answer;
	cout << answer << '\n';
}
