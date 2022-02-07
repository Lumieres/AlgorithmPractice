#include <iostream>

using namespace std;

int map[9][9];

bool find(int* x, int* y) {
	for(*x=0; *x<9; ++*x) {
		for(*y=0; *y<9; ++*y) {
			if(map[*x][*y] == 0) return true;
		}
	}

	*x = *y = -1;

	return false;
}

bool check(int x, int y, int num) {
	for(int i=0; i<9; i++) {
		if(map[x][i] == num ) return false;
		if(map[i][y] == num ) return false;
	}

	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			if(map[x/3*3+i][y/3*3+j] == num ) return false;
		}
	}

	return true;
}

bool dfs() {
	int x,y;

	if(!find(&x, &y)) return true;

	for(int i=1; i<=9; i++) {
		if(check(x,y,i)) {
			map[x][y] = i;
			if(dfs()) return true;
			map[x][y] = 0;
		}
	}
	return false;
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	for(int i = 0; i<9; i++) {
		for(int j = 0; j<9; j++) {
			cin >> map[i][j]; 
		}
	}

	dfs();

	for(int i=0; i<9; i++) {
		for(int j=0; j<9; j++) {
			cout << map[i][j] << ' ';
		}
		cout << '\n';
	}

	return 0;
}
