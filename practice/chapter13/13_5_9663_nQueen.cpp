#include <iostream>
#include <cmath>

using namespace std;

int N;
int total = 0;
int col[16] = {0};

bool check(int num){

	for(int i=0; i<num; i++){
		if(col[i] == col[num] || abs(col[i]-col[num]) == num-i) return false;
	}
	return true;
}

void doQueen(int cnt){
	if(cnt == N) total++;
	else{
		for(int i=0; i<N; i++){
			col[cnt] = i;
			if(check(cnt)) doQueen(cnt+1);
		}
	}
}
int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	doQueen(0);
	cout << total << '\n';
}
