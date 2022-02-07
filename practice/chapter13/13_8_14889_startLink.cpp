#include <iostream>
#include <cmath>

using namespace std;

int N;
int map[21][21];
int v[21];
int depth[11];
int sumOne = 0;
int sumZero = 0;
int minDiff = 987654321;

void dfs(int index) {
	if(index == N/2) {
		sumOne = sumZero = 0;
		for(int x=0; x<N; x++){
			if(v[x] == 1) {
				for(int y=0; y<N; y++) {
					if(v[y] == 1) sumOne += map[x][y];
				}
			}
			else if(v[x] == 0) {
				for(int y=0; y<N; y++) {
					if(v[y] == 0) sumZero += map[x][y];
				}
			}
		}
		if(minDiff>abs(sumOne-sumZero)) minDiff = abs(sumOne-sumZero);
		return;
	}

	for(int i=0; i<N; i++) {
		if(v[i] == 1) continue;
		depth[index] = i;
		if(index >= 1 && depth[index-1] >= depth[index]) continue; 
		v[i] = 1;
		dfs(index+1);
		v[i] = 0;
	}
}
int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N;

	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			cin >> map[i][j];
		}
	}

	dfs(0);

	cout << minDiff << '\n';
}
