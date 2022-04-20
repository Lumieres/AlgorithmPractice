#include <iostream>

using namespace std;

int N,T;
long long memo[101] = {0,};

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	memo[1] = 1;
	memo[2] = 1;
	memo[3] = 1;

	cin >> T;
	while(T--) {
		cin >> N;
		if(memo[N] == 0) {
			for(int i=4; i<=N; i++){
				if(memo[i] == 0) 
					memo[i] = memo[i-2]+memo[i-3];
			}
		}
		cout << memo[N] << '\n';
	}

}
