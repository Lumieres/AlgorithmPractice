#include <iostream>

using namespace std;

int T,N;
int output;
int cntZero, cntOne;
int memo[41] = {0};

int fibonacci(int n) {

	if(n==0) {
		return 0;
	}
	else if(n==1) {
		return 1;
	}
	else {
		int a,b;
		a = memo[n-1] != 0 ? memo[n-1] : fibonacci(n-1);
		b = memo[n-2] != 0 ? memo[n-2] : fibonacci(n-2);
		return memo[n] = a+b;
	}
	
}
int main(void) {
	ios_base:: sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	memo[1] = 1;
	cin >> T;
	while(T--) {
		cntZero = cntOne = 0;
		cin >> N;
		output = fibonacci(N);
		if(N==0) {
			cout << 1 << ' ' << 0 << '\n';
		}
		else {
			cout << memo[N-1] << ' ' << memo[N] << '\n';
		}
	}
}
