#include <iostream>
#include <cmath>

using namespace std;

int N;
int memo[10001] = {0,};
int input[10001] = {0,};
int maxAnswer = 0;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N;

	for(int i=1; i<=N; i++)
		cin>>input[i];
	
	for(int i=1; i<=N; i++){
		if(i==1) memo[i] = input[i];
		else if(i==2) memo[i] = input[i-1]+input[i];
		memo[i] = max(max(memo[i-3]+input[i-1]+input[i],memo[i-2]+input[i]),memo[i-1]);
	}

	for(int i=1; i<=N; i++)
		maxAnswer = max(memo[i],maxAnswer);

	cout << max(memo[N],memo[N-1]) << '\n';
}
