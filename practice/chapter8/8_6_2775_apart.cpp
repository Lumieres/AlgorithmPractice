#include <iostream>

using namespace std;

const int MAX = 15;
int K, N, T;
int arr[MAX][MAX];

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	for(int i=0; i<MAX; i++){
		for(int j=0; j<MAX; j++){
			if(i == 0) arr[i][j] = j+1;
			else if(j == 0) arr[i][j] = 1;
			else arr[i][j] = arr[i-1][j] + arr[i][j-1];
		}
	}
	cin >> T;
	while(T--){
		cin >> K >> N;
		cout << arr[K][N-1] << "\n";
	}
}
