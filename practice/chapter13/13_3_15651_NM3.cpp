#include <iostream>

using namespace std;

int N,M;
int arr[8] = {0};

void dfs(int depth){
	if(depth == M){
		for(int i=0; i<M; i++){
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}

	for(int i=1; i<=N; i++){
		arr[depth] = i;
		dfs(depth+1);
	}
}
int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> M;
	dfs(0);
}
