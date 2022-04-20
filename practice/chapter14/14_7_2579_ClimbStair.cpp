#include <iostream>
#include <cmath>

using namespace std;

int N;
int input[301] = {0,};
int memo[301] = {0,};

int getMax(int num) {

	if(num < 1) return 0;
	if(num==1) memo[num] = input[num];
	if(memo[num] != 0) return memo[num];

	memo[num] = input[num] + max((getMax(num-3)+input[num-1]),getMax(num-2));
	return memo[num]; 
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N;

	for(int i=1; i<=N; i++) cin >> input[i];
	cout <<  getMax(N) << '\n';

}
