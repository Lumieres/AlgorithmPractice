#include <iostream>

using namespace std;

int N,M;
int arr[9] = {0};
int v[9] = {0};

void dfs(int depth){
	if(depth==M){
		for(int i=0; i<M; i++){
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for(int i=1; i<=N; i++){
		if(v[i]==1) continue;

		if(depth>=1 && arr[depth-1] > i) continue;

		arr[depth] = i;
		v[i] = 1;
		dfs(depth+1);
		v[i] = 0;
	}

}
int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> M;
	dfs(0);
}
