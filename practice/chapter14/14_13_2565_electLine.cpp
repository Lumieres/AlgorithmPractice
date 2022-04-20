#include <iostream>
#include <cmath>

using namespace std;

int N;
int memo[501][2] = {0,};
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
		bM = max(bM,p);
		bN = min(bN,p);
	}

	memo[bN][0] = memo[bN][1] = 1;


	cout << "bM: " << bM << '\n';
	cout << "bN: " << bN << '\n';

	for(int i=bN; i<=bM; i++) {
		for(int j=i; j>=bN; j--) {
			if(input[j]!=0 && input[i]!=0 && input[i]>input[j]) {
				cout << "increase\n";
				cout<< "input[i]: " << input[i] << " ";
				cout<< "input[j]: " << input[j] << " ";
				cout << '\n';
				memo[i][0] = max(memo[i][0],memo[j][0]+1);
			}
			if(input[j]!=0 && input[i]!=0 && input[i]<input[j]) {
				memo[i][1] = max(memo[i][1],memo[j][1]+1);
			}
		}
	}
	for(int i=bN; i<=bM; i++) {
		answer = max(answer,memo[i][0]);
	}
	cout << "increase: " << answer << '\n';

	for(int i=bN; i<=bM; i++) {
		answer = max(answer,memo[i][1]);
	}
	cout << "decrease: " << answer << '\n';
	answer = N - answer;
	cout << answer << '\n';
}
