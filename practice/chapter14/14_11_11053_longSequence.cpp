#include <iostream>
#include <cmath>

using namespace std;

int N;
int input[1001];
int memo[1001];
int sumMax = 0;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	for(int i=1; i<=N; i++) 
		cin >> input[i];

	for(int i=1; i<=N; i++) {
		memo[i] = 1;
		for(int j=i; j>=1; j--){
			if(input[i]>input[j]){
				memo[i] = max(memo[i],memo[j]+1);
			}
		}
		sumMax = max(sumMax,memo[i]);
	}
	cout << sumMax << '\n';
}
