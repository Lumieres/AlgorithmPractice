#include <iostream>

using namespace std;

int N;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	int arr[N][2];

	for(int t=0; t<N; t++){
		cin >> arr[t][0];
		cin >> arr[t][1];
	}

	for(int i=0; i<N; i++){
		int idx=1;
		for(int j=0; j<N; j++){
			if(arr[i][0]<arr[j][0] && arr[i][1]<arr[j][1]){
				idx++;
			}
		}
		cout << idx << "\n";
	}
}
